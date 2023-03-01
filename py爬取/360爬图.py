
#1,拿到主页面的源代码，然后提取到子页面的链接地址
#，通过href拿到子页面的内容，从子页面中拿到图片的下载地址
#3，下载图片


import time
import requests

from bs4 import BeautifulSoup

if __name__ == '__main__':

    numTu = 0
    print("你想爬多少页高清美女大图(一页24张):")
    pageNum = input()
    for i in range(int(pageNum)):
        i+=1
        strU = 'list_' + str(i) +'.html'
        #获取网页地址
        #url = 'http://bizhi360.com/weimei/'
        #url = 'http://bizhi360.com/dongtai/'
        if i >1:
            url = 'http://bizhi360.com/meinv/' + strU
        else:
            url = 'http://bizhi360.com/meinv/'
        resp = requests.get(url)

        print(url)

        resp.encoding = 'utf-8'  #转换编码

        #打印获取的数据
        #print(resp.text)

        #把源代码交给bs
        main_page = BeautifulSoup(resp.text,"html.parser")
        alist = main_page.find("div",class_ = "pic-list").find_all("a")   #范围缩小到图片标签集合
        #print(alist)
        alist.pop(0)
        #alist2 = alist
        #alist2.clear()
        for a in alist:
         #  print(a.get("href"))
         #http: // bizhi360.com / 3d / 11440.html

         #http: // bizhi360.com / 3d / 11377. html

            href ="http://bizhi360.com/meinv/" + a.get('href').split("/")[-1]
            #拿到子页面源代码
            #print(href)
            child_page_resp = requests.get(href)
            child_page_resp.encoding = 'utf-8'
            child_page_text = child_page_resp.text
            #从子页面拿到图片的下载路径
            child_page = BeautifulSoup(child_page_text,"html.parser")
            p = child_page.find("div",class_ = "article")
            # print(p)
            img = p.find("a")
            #print(img.get("href"))
            src= img.get("href")

            #下载图片
            img_resp = requests.get(src)
            img_resp.content  #拿到的是字节
            img_name = src.split("/")[-1] #拿到url中最后一个/以后的内容

            with open("./"+img_name,mode = "wb") as f:
            #with open("venv/img/" + img_name, mode="wb") as f:
                f.write(img_resp.content )   #写入图片内容
            numTu+=1
            print("over %d张" %numTu)
            time.sleep(1)




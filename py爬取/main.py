# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


# Press the green button in the gutter to run the scri


import requests
if __name__ == '__main__':
    print_hi('PyCharm')

    url = 'https://www.sogou.com/web'
 #   url = 'https://www.baidu.com/web'

    kw = input('enter a word:')

    param = {
        'query':kw
    }

    headers = {
        'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36 Edg/108.0.1462.42'
    }
    response = requests.get(url = url,params = param,headers = headers)

    page_test = response.text

    #print(page_test)

    filename = kw+'.html'

    with open(filename, 'w', encoding='utf-8') as fp:
        fp.write(page_test)

# See PyCharm help at https://www.jetbrains.com/help/pycharm/

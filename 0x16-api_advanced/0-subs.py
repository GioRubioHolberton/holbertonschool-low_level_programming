#!/usr/bin/python3
"""How many subs?"""
import requests


def number_of_subscribers(subreddit):
    """Get num subs"""
    url_end = ('https://www.reddit.com/r/{}/about.json'.format(subreddit))

    my_headers = {'User-Agent': 'Gon'}
    requ = requests.get(url_end, headers=my_headers)

    if requ.status_code == 301:
        return (0)

    list = requ.json().get('data')
    return (list)

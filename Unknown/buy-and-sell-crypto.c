/*
 * Problem: Buy And Sell Crypto
 * URL: https://neetcode.io/problems/buy-and-sell-crypto
 * Date: 2026-03-06
 */


        while j < len(prices):
            if prices[i] > prices[j]:
        j=1
        i=0
        total=0
            else:
                total=prices[j]-prices[i]
            j+=1
                i=j
                maxProfit=max(maxProfit, total)
        return maxProfit
        maxProfit=0

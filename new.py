class shop:
    cart = []

    def __init__(self,buyer):
        self.buyer = buyer

    def addtocart(self,item):
        self.cart.append(item)   


p1 = shop('meh')
p1.addtocart('shoes')
p1.addtocart('phone')

nish = shop('noisho')
nish.addtocart('cap')
nish.addtocart('watch')
print(nish.cart)
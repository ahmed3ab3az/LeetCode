import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    mask1 = products['low_fats'] == 'Y'
    mask2 = products['recyclable'] == 'Y'
    return products.loc[(mask1 & mask2),['product_id']]
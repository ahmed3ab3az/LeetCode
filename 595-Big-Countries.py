import pandas as pd

def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    mask1 = world['area'] >= 3000000
    mask2 = world['population'] >= 25000000
    ans = world[(mask1 | mask2) ]
    return ans[['name' , 'population' , 'area' ]]
import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    ans = customers['id'].isin(orders['customerId'])
    return customers.loc[~ans , ['name']].rename(columns = {'name':'Customers'})
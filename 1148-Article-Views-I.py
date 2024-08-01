import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    ans = views['author_id'] == views['viewer_id']
    df = views.loc[ans, ['author_id']].rename(columns = {'author_id':'id'}).drop_duplicates()
    return df.sort_values(by= 'id')
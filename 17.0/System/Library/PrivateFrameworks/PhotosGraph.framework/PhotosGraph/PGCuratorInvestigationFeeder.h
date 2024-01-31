@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)initWithItems:(id)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)privateItems;
- (id)sharedItems;

@end

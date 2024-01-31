@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)localStartDate;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)initWithItems:(id)a0;
- (id)localEndDate;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;

@end

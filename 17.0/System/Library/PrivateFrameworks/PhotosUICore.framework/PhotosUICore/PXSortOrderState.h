@interface PXSortOrderState : PXObservable

@property (readonly, nonatomic) unsigned long long sortOrder;

- (void)setSortOrder:(unsigned long long)a0;
- (void)enumeratePossibleSortOrdersUsingBlock:(id /* block */)a0;
- (id)initWithSortOrder:(unsigned long long)a0;

@end

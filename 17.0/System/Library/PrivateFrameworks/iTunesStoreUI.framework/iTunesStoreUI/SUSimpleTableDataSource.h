@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource

@property (retain, nonatomic) Class cellConfigurationClass;
@property (retain, nonatomic) NSArray *objects;

- (void)dealloc;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)cellForIndexPath:(id)a0;
- (id)objectForIndexPath:(id)a0;
- (double)cellHeightForIndexPath:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (void)reloadCellContexts;

@end

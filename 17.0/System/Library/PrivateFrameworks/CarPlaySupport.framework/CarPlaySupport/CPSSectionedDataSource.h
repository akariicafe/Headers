@class CPSTemplateEnvironment, NSArray, NSString, CPSessionConfiguration, NSMutableArray, NSIndexPath;

@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate> {
    BOOL _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) CPSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSArray *sectionHeightCache;
@property (readonly, nonatomic) NSIndexPath *assistantCellIndexPath;
@property (readonly, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (readonly, nonatomic) long long numberOfEnhancedSections;
@property (nonatomic) long long assistantCellVisibility;
@property (nonatomic) long long assistantCellPosition;
@property (retain, nonatomic) NSString *assistantCellTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (long long)numberOfItems;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)_filteredNumberOfItemsGivenSection:(long long)a0 numberOfItems:(long long)a1;
- (void)reloadItems:(id)a0;
- (void)updateSections:(id)a0;
- (id)firstItemIndexPath;
- (id)indexPathForItemWithIdentifier:(id)a0;
- (void)sessionConfiguration:(id)a0 limitedUserInterfacesChanged:(unsigned long long)a1;
- (id)sectionWithIdentifier:(id)a0;
- (BOOL)isLimitingLists;
- (void)updateIndexPathForAssistantItem;
- (id)_sanitizedSectionIndexTitleForTitle:(id)a0;
- (double)heightForItemAtIndexPath:(id)a0 inEnvironment:(id)a1;
- (id)initWithSections:(id)a0 templateEnvironment:(id)a1;
- (void)invalidateHeightCache;
- (void)rebuildHeightCacheWithEnvironment:(id)a0;
- (BOOL)showingAssistantInLastPosition;

@end

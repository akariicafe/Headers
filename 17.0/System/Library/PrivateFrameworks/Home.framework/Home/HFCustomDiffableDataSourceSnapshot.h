@class NSArray;

@interface HFCustomDiffableDataSourceSnapshot : NSObject

@property (retain, nonatomic) NSArray *sections;

- (id)itemIdentifiers;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)sectionIdentifiers;

@end

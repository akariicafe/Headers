@class NSArray, NSMutableDictionary, NSDiffableDataSourceSnapshot;

@interface PKSettingsTableViewConfiguration : NSObject {
    NSMutableDictionary *_rowsForIdentifier;
    NSMutableDictionary *_sectionsForIdentifier;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

@property (readonly, nonatomic) NSArray *sections;

- (id)init;
- (id)snapshot;
- (id)sectionForSectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)rowsForSection:(id)a0;
- (void)appendSection:(id)a0 rows:(id)a1;
- (void)diff:(id)a0 updatedIdentifiers:(id *)a1;
- (id)rowForItemIdentifier:(id)a0;

@end

@class NSDiffableDataSourceSnapshot, NSMutableDictionary;

@interface HFSnapshotInfo : NSObject

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *baseSnapshot;
@property (retain, nonatomic) NSMutableDictionary *sectionSnapshots;

- (id)initWithSnapshot:(id)a0;
- (void).cxx_destruct;

@end

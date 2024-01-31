@class NSArray, NSString, FBKDraftModelSnapshot;

@interface FBKDraftModelSnapshotDiff : NSObject

@property (nonatomic, readonly) NSArray *removedSections;
@property (nonatomic, readonly) NSArray *addedSections;
@property (nonatomic, readonly) NSArray *addedRows;
@property (nonatomic, readonly) NSArray *removedRows;
@property (nonatomic, readonly) BOOL containsAnyAdditionsOrRemovals;
@property (nonatomic, readonly) BOOL hasRemovedAllDevices;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) FBKDraftModelSnapshot *previousSnapshot;
@property (retain, nonatomic) FBKDraftModelSnapshot *currentSnapshot;

- (void).cxx_destruct;
- (unsigned long long)indexOfRowInNewSnapshot:(id)a0;
- (unsigned long long)indexOfSectionInNewSnapshot:(id)a0;
- (id)initWithPreviousSnapshot:(id)a0 newSnapshot:(id)a1;

@end

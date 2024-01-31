@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject

@property (retain, nonatomic) VUICollectionChangeSet *mediaEntitiesChangeSet;
@property (retain, nonatomic) VUICollectionChangeSet *groupingChangeSet;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaEntitiesChangeSet:(id)a0;

@end

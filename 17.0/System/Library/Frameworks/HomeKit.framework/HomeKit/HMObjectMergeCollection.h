@class NSArray, NSMutableArray;

@interface HMObjectMergeCollection : NSObject

@property (retain, nonatomic) NSArray *addedObjects;
@property (readonly, nonatomic) NSMutableArray *currentUpdatedObjects;
@property (readonly, nonatomic) NSArray *commonObjectPairs;
@property (readonly, nonatomic) NSArray *removedObjects;
@property (readonly, nonatomic) NSArray *updatedObjects;
@property (readonly, nonatomic) NSArray *finalObjects;
@property (readonly, nonatomic, getter=isModified) BOOL modified;

- (void)mergeCommonObjectsNoMergeCount;
- (id)initWithCurrentObjects:(id)a0 newObjects:(id)a1 commonObjectPredicate:(id /* block */)a2;
- (id)initWithCurrentObjects:(id)a0 newObjects:(id)a1;
- (void)mergeCommonObjects;
- (void).cxx_destruct;
- (void)replaceAddedObjectsWithObjects:(id)a0;

@end

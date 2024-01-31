@class NSSet, NSString, EDSearchableIndexPersistence, EDSearchableIndexScheduler, EDSearchableIndex;

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _indexLock;
}

@property (retain, nonatomic) EDSearchableIndex *index;
@property (retain, nonatomic) EDSearchableIndexPersistence *persistence;
@property (retain, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly, copy, nonatomic) NSSet *dataSourceRefreshReasons;
@property (readonly, copy, nonatomic) NSSet *purgeReasons;
@property (readonly, copy, nonatomic) NSSet *exclusionReasons;
@property (readonly, copy, nonatomic) NSSet *currentReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

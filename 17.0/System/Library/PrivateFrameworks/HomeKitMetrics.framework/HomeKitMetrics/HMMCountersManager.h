@class NSMutableDictionary, HMMDailyPartitionProvider, HMMCoreDataCounterStorage, HMMDateProvider;

@interface HMMCountersManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMMCoreDataCounterStorage *primaryStorage;
@property (readonly, nonatomic) HMMDailyPartitionProvider *partitionProvider;
@property (readonly, nonatomic) NSMutableDictionary *namedGroups;
@property (readonly, nonatomic) NSMutableDictionary *homeGroups;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;

- (void)save;
- (void).cxx_destruct;
- (id)counterGroupForHomeUUID:(id)a0 groupName:(id)a1;
- (id)counterGroupForHomeUUIDFromLogEvent:(id)a0 groupName:(id)a1;
- (id)counterGroupForName:(id)a0;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (void)deleteCountersUsingPredicate:(id)a0;
- (id)initWithDataModelName:(id)a0 atPath:(id)a1;
- (id)initWithDataModelName:(id)a0 atPath:(id)a1 dateProvider:(id)a2;

@end

@protocol HMDPersistentStore;

@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (id)unarchive;
- (void).cxx_destruct;
- (id)initWithPersistentStore:(id)a0;
- (void)archiveDictionary:(id)a0;

@end

@class NSObject, NSMutableDictionary, AXDispatchTimer;
@protocol OS_dispatch_queue;

@interface HUNearbySettings : HCSettings

@property (retain, nonatomic) NSMutableDictionary *collectedData;
@property (retain, nonatomic) AXDispatchTimer *saveTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;

+ (id)sharedInstance;
+ (id)timeStamp;
+ (id)dateFromTimeStamp:(id)a0;
+ (BOOL)isTimeStampExpired:(id)a0;

- (BOOL)shouldStoreLocally;
- (void)logMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (id)savedData;
- (void)addCollectedData:(id)a0 toData:(id)a1;
- (void)cleanUpExpiredAndSaveData:(id)a0;
- (id)cleanUpExpiredFromSavedDomainData:(id)a0;
- (id)extractMessageIDsFromMessage:(id)a0;
- (void)processAndSaveCollectedDataWithCompletion:(id /* block */)a0;
- (void)processAndSaveCollectedTimeStamps;
- (void)saveCollectedDataWithCompletion:(id /* block */)a0;
- (void)sentIDSMessage:(id)a0 domain:(id)a1;

@end

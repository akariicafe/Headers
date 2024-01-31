@class HKHealthStore, NSObject;
@protocol OS_dispatch_queue;

@interface HAENHealthKitStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKHealthStore *_healthStore;
}

+ (id)sharedInstance;
+ (id)createHKCategorySampleForEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)saveNotificationEventToHealthKit:(id)a0;
- (id)saveNotificationEventToHealthKit:(id)a0 withDelegate:(id)a1;

@end

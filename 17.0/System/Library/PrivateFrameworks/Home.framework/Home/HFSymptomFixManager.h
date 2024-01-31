@class NSString, NSMutableSet;

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate>

@property (readonly, nonatomic) NSMutableSet *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)fixSession:(id)a0 didChangeState:(long long)a1;
- (void)fixSymptom:(id)a0 forFixableObject:(id)a1 presentingViewController:(id)a2;
- (id)_itemForFixSession:(id)a0;
- (id)_itemForSymptom:(id)a0 accessory:(id)a1;
- (BOOL)anySymptomIsBeingFixedForFixableObject:(id)a0;
- (long long)fixStateForSymptom:(id)a0 accessory:(id)a1;

@end

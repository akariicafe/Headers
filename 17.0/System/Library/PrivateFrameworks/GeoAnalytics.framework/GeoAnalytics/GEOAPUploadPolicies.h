@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPUploadPolicies : NSObject {
    NSObject<OS_dispatch_queue> *_isoQueue;
    NSMutableDictionary *_policyDict;
    NSMutableArray *_configListeners;
}

+ (id)sharedPolicies;

- (id)init;
- (void)_updatePolicyConfigForUploadPolicyConfigType:(int)a0 configKey:(struct { struct { unsigned int x0; void *x1; } x0; })a1;
- (id)uploadPolicyForUploadPolicyType:(int)a0;
- (void).cxx_destruct;
- (double)ttlForUploadPolicyType:(int)a0;

@end

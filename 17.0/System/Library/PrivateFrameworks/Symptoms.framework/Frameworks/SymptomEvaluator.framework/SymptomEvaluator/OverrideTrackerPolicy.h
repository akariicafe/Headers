@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (id)init;
- (id)maxConnectionPolicyForTarget:(id)a0;
- (id)maxRRCTimePolicyForTarget:(id)a0;
- (void).cxx_destruct;

@end

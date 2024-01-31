@class NSString, HKObjectType;

@interface HDAppSubscription : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long dataCode;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (nonatomic) unsigned long long updateFrequency;
@property (nonatomic) unsigned long long lastAnchor;
@property (nonatomic) long long lastAckTime;
@property (nonatomic) long long launchTimeHysteresis;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 dataCode:(long long)a1;

@end

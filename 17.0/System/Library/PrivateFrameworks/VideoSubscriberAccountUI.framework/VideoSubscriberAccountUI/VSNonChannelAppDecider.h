@class NSArray, NSString;

@interface VSNonChannelAppDecider : NSObject

@property (copy, nonatomic) NSArray *appDescriptions;
@property (copy, nonatomic) NSString *preferredAppBundleOrAdamID;
@property (copy, nonatomic) NSString *preferredDeviceFamily;

- (id)init;
- (void).cxx_destruct;
- (id)decidedNonChannelApps;

@end

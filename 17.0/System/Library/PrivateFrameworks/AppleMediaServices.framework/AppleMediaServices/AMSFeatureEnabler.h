@class NSHTTPCookie;

@interface AMSFeatureEnabler : NSObject

@property (class, readonly, nonatomic) NSHTTPCookie *cookie;

+ (void)clear;
+ (id)_fetchEnabledFeatures;

@end

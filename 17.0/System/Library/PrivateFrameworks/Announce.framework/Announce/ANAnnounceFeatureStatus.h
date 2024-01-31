@interface ANAnnounceFeatureStatus : NSObject

@property (class, readonly, nonatomic) BOOL isEnabledForPersonalDevices;
@property (class, readonly, nonatomic) BOOL isAnnounceEnabled;
@property (class, readonly, nonatomic) BOOL shouldStopPlaybackOnSiriActivation;
@property (class, readonly, nonatomic) BOOL isSiriEndpointsATVEnabled;

+ (BOOL)isEnabled;

@end

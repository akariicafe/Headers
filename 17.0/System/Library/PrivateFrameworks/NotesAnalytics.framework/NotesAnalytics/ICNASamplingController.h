@interface ICNASamplingController : NSObject

@property (readonly, nonatomic) BOOL shouldTrackSyncHealth;

+ (id)sharedController;

- (id)init;

@end

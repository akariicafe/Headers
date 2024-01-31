@class DaemonController;

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller;

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (void).cxx_destruct;

@end

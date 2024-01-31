@class NSXPCConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (retain, nonatomic) NSXPCConnection *runner;

+ (id)sharedManager;

- (void)reset;
- (void).cxx_destruct;
- (void)prewarmRunnerIfNecessary;

@end

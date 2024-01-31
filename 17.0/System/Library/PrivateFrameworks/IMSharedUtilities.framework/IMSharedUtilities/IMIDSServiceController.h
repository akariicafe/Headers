@class NSString;

@interface IMIDSServiceController : NSObject

@property (retain, nonatomic) NSString *debuggingService;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)logIfDebuggingService:(id)a0 method:(const char *)a1;

@end

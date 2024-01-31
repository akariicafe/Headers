@class NSUserDefaults;

@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (id)init;
- (BOOL)requestShouldThrottle:(id)a0;
- (void).cxx_destruct;
- (void)request:(id)a0 didCompleteWithError:(id)a1;

@end

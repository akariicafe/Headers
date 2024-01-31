@class NSString;

@interface BRCReachabilityObserver : NSObject <BRCReachabilityDelegate>

@property (copy, nonatomic) id /* block */ networkReachabilityDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

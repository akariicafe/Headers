@class NSString;

@interface AMUIConcreteUnlockRequest : NSObject <AMUnlockRequest>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *unlockDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

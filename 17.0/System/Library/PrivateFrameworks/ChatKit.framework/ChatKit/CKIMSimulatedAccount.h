@class IMHandle;

@interface CKIMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (void).cxx_destruct;
- (id)loginIMHandle;

@end

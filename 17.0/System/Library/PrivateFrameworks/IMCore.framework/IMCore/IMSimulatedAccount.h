@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (BOOL)supportsRegistration;
- (BOOL)isConnected;
- (void).cxx_destruct;
- (BOOL)isOperational;
- (id)loginIMHandle;

@end

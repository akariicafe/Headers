@class AVOutputDevice;

@interface MRUPairingAuthorizationRequest : NSObject

@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly, nonatomic) long long inputType;

- (id)initWithOutputDevice:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOutputDevice:(id)a0 inputType:(long long)a1;
- (void)completeWithPasscode:(id)a0;

@end

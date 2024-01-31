@class LAPSPasscode;

@interface LAPSFetchNewPasscodeResult : NSObject

@property (readonly, nonatomic) LAPSPasscode *passcode;
@property (readonly, nonatomic) BOOL isPasscodeRecoveryEnabled;

- (void).cxx_destruct;
- (id)initWithPasscode:(id)a0 isPasscodeRecoveryEnabled:(BOOL)a1;
- (id)initWithRawPasscode:(id)a0;
- (id)initWithRawPasscode:(id)a0 isPasscodeRecoveryEnabled:(BOOL)a1;

@end

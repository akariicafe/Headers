@class LAPSPasscode;

@interface LAPSFetchOldPasscodeResult : NSObject

@property (readonly, nonatomic) LAPSPasscode *passcode;

- (void).cxx_destruct;
- (id)initWithPasscode:(id)a0;
- (id)initWithRawPasscode:(id)a0;

@end

@interface SASProximityHandshake : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long platformType;
@property BOOL hasPasscodeSet;
@property int simplePasscodeType;
@property int unlockType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadInformation;

@end

@class NSString, NSArray;

@interface IDSKTVerificationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uri;
@property (nonatomic) BOOL optedIn;
@property (retain, nonatomic) NSArray *verifiedPushTokens;
@property (retain, nonatomic) NSArray *unverifiedPushTokens;
@property (retain, nonatomic) NSArray *endpointTransparencyStates;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

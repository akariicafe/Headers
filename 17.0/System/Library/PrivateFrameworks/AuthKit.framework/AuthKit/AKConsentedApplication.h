@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *transferState;
@property (retain, nonatomic) NSString *primaryClientID;
@property (retain, nonatomic) NSString *origin;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseInfo:(id)a0;

@end

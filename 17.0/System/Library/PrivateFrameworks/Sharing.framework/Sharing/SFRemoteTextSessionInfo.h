@class NSString, NSDictionary;

@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) long long returnKeyType;
@property (copy, nonatomic) NSDictionary *rtiPayload;
@property (nonatomic) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithRTIPayload:(id)a0;

@end

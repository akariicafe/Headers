@class NSData, NSDictionary;

@interface DCCredentialResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSDictionary *elementsByNamespace;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseData:(id)a0 elementsByNamespace:(id)a1;

@end

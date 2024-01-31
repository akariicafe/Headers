@class NSData, AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSBiometricsSignatureRequest *originalRequest;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSString *signature;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

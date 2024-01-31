@class GTCaptureConfiguration;

@interface GTCaptureUpdateConfiguration : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GTCaptureConfiguration *configuration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

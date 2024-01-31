@interface GTCaptureUpdateHighlight : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) BOOL enable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

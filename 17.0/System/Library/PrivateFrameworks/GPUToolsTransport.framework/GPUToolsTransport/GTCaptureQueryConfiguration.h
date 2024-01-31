@interface GTCaptureQueryConfiguration : GTCaptureRequest <NSSecureCoding> {
    unsigned long long _requestID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)requestID;
- (id)initWithCoder:(id)a0;

@end

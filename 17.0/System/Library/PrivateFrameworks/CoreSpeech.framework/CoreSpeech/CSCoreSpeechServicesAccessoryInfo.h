@interface CSCoreSpeechServicesAccessoryInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsJustSiri;
@property (nonatomic) BOOL supportsAlwaysOnAccelerometer;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

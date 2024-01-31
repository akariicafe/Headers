@class NSArray, MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *requiredCapabilities;
@property (readonly, nonatomic) MSMessageTemplateLayout *alternateLayout;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sanitizedCopy;
- (id)initWithAlternateLayout:(id)a0;

@end

@class NSString;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)symbol;
- (id)_fallbackKey;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;

@end

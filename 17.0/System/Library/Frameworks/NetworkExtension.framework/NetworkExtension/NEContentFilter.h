@class NEPerApp, NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enableManualMode;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NEFilterProviderConfiguration *provider;
@property (copy) NEPerApp *perApp;
@property (nonatomic) long long grade;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

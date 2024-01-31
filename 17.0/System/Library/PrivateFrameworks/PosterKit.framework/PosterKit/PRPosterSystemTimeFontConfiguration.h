@class NSString, PRTimeFontConfiguration;

@interface PRPosterSystemTimeFontConfiguration : PRPosterTimeFontConfiguration {
    BOOL _systemItem;
    PRTimeFontConfiguration *_timeFontConfiguration;
}

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier;
@property (readonly, nonatomic) double weight;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultTimeFontIdentifier;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithTimeFontIdentifier:(id)a0 weight:(double)a1 systemItem:(BOOL)a2;
- (BOOL)isSystemItem;
- (struct PRVariantWeightRange { unsigned long long x0; unsigned long long x1; })_validWeightRangeForTimeFontIdentifier:(id)a0;
- (double)_defaultWeightForTimeFontIdentifier:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithTimeFontIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithTimeFontIdentifier:(id)a0 systemItem:(BOOL)a1;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class PFParallaxLayoutConfiguration;

@interface PFWallpaperCompoundDeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } deviceSize;
@property (readonly, nonatomic) PFParallaxLayoutConfiguration *portraitConfiguration;
@property (readonly, nonatomic) PFParallaxLayoutConfiguration *landscapeConfiguration;

+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1;
+ (id)callServicesConfigurationWithScreenSize:(struct CGSize { double x0; double x1; })a0 titleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2;
+ (id)compoundDeviceConfigurationFromDictionary:(id)a0 error:(id *)a1;
+ (id)configurationWithDeviceName:(id)a0;
+ (id)deviceCallServicesConfigurationWithTitleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)deviceConfiguration;
+ (BOOL)deviceSupportsLandscapeConfiguration;
+ (id)genericCallServicesConfigurationWithTitleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)genericConfiguration;
+ (id)genericPadConfiguration;
+ (id)knownDeviceConfigurations;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPortraitConfiguration:(id)a0 landscapeConfiguration:(id)a1;
- (BOOL)isEqualToLayoutConfiguration:(id)a0;

@end

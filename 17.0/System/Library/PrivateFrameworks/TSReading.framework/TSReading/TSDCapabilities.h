@interface TSDCapabilities : NSObject

@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long device;
@property (readonly, nonatomic) long long renderer;
@property (readonly, nonatomic) BOOL isRendererH3OrBelow;
@property (readonly, nonatomic) BOOL isRendererH4OrBelow;
@property (readonly, nonatomic) BOOL isRendererH5OrBelow;
@property (readonly, nonatomic) BOOL hasLightningPort;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumTextureSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumHardcodedTextureSize;
@property (readonly, nonatomic) BOOL isMetalCapable;

+ (id)currentCapabilities;
+ (void)setCurrentCapabilitiesOverride:(id)a0;
+ (id)currentCapabilitiesOverride;

- (id)init;
- (void)p_setupPlatform;
- (struct CGSize { double x0; double x1; })maximumMetalTextureSizeForDevice:(id)a0;
- (BOOL)p_isMetalCapable;
- (void)p_setupDevice;

@end

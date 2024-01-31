@interface APCCodecInfo : NSObject

+ (Class)configurationClassForName:(id)a0;
+ (BOOL)isSupportedCodecCapability:(id)a0;
+ (BOOL)isSupportedCodecConfiguration:(id)a0;
+ (id)supportedConfigurationClasses;
+ (id)supportedDecoders;
+ (id)supportedEncoders;

@end

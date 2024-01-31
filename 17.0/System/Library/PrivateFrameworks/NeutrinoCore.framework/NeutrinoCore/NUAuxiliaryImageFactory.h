@interface NUAuxiliaryImageFactory : NSObject

+ (id)auxiliaryImageFromCoreGraphicsInfoDictionary:(id)a0 forCGAuxiliaryImageTypeString:(id)a1 error:(out id *)a2;
+ (id)auxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryImageType:(long long)a1;

@end

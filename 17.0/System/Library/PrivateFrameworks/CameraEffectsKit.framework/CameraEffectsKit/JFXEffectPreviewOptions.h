@class PVColorSpace;

@interface JFXEffectPreviewOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long quality;
@property (nonatomic) unsigned int parentCode;
@property (retain, nonatomic) PVColorSpace *outputColorSpace;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initPreviewOptions;

@end

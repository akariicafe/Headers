@class ICAppearanceInfo;

@interface ICPreviewDeviceInfo : NSObject

@property (nonatomic) double imageSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo;

+ (id)previewDeviceInfoForPreviewImage:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageSize:(double)a0 scale:(double)a1;
- (id)deviceInfoFromAddingAppearanceInfo:(id)a0;
- (id)initWithImageSize:(double)a0 scale:(double)a1 appearanceInfo:(id)a2;

@end

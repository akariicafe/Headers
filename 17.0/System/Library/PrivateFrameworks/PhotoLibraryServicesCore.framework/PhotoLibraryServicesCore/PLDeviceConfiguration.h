@interface PLDeviceConfiguration : NSObject

@property (nonatomic) BOOL isRetina;
@property (nonatomic) BOOL isPad;
@property (nonatomic) BOOL isTV;
@property (nonatomic) BOOL isWatch;
@property (nonatomic) BOOL isMac;
@property (nonatomic) BOOL supportsASTC;
@property (nonatomic) BOOL isMigrationService;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } logicalScreenSize;
@property (readonly, nonatomic) BOOL shouldUseNanoThumbnailFormats;
@property (readonly, nonatomic) unsigned long long logicalScreenPixelSize;

+ (id)defaultDeviceConfiguration;

- (id)initWithLogicalScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 deviceClass:(void *)a2 supportsASTC:(BOOL)a3 isMigrationService:(BOOL)a4;
- (BOOL)shouldUseNanoThumbnailFormats;
- (id)description;

@end

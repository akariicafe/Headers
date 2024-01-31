@interface TXRAssetCatalogFileAttributes : NSObject {
    struct CGColorSpace { } *_colorSpace;
}

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) unsigned char exifOrientation;
@property (nonatomic) unsigned long long fileFormat;

- (id)init;

@end

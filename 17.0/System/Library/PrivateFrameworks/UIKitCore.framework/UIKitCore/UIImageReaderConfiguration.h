@interface UIImageReaderConfiguration : NSObject <NSCopying> {
    struct { unsigned char prefersHighDynamicRange : 1; unsigned char preparesImagesForDisplay : 1; unsigned char generatesThumbnails : 1; } _flags;
}

@property (nonatomic) BOOL prefersHighDynamicRange;
@property (nonatomic) BOOL preparesImagesForDisplay;
@property (nonatomic) struct CGSize { double width; double height; } preferredThumbnailSize;
@property (nonatomic) double pixelsPerInch;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

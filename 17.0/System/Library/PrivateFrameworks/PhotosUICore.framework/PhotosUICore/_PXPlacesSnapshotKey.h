@interface _PXPlacesSnapshotKey : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } _imageSize;
@property (readonly, nonatomic) long long _userInterfaceStyle;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 userInterfaceStyle:(long long)a1;

@end

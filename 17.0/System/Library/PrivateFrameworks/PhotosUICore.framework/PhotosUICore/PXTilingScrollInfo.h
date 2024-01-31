@interface PXTilingScrollInfo : NSObject <NSCopying>

@property (nonatomic) unsigned long long axis;
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
@property (nonatomic) struct CGSize { double width; double height; } interpageSpacing;
@property (nonatomic) struct CGPoint { double x; double y; } pagingOrigin;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@interface PUWallpaperDebugViewSpec : NSObject

@property (readonly, nonatomic) unsigned long long viewMode;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } headerReferenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } collectionViewContentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerInsets;

- (id)initWithViewMode:(unsigned long long)a0;

@end

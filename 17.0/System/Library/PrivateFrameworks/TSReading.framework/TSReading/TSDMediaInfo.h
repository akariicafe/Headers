@class NSString;

@interface TSDMediaInfo : TSDStyledInfo {
    struct { unsigned char isPlaceholder : 1; unsigned char wasMediaReplaced : 1; } mFlags;
}

@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultOriginalSize;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL wasMediaReplaced;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) NSString *mediaDisplayName;
@property (readonly, nonatomic) NSString *mediaFileType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } rawDataSize;

- (void)setGeometry:(id)a0;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (struct CGPoint { double x0; double x1; })centerForReplacingWithNewMedia;
- (void)takePropertiesFromReplacedMediaInfo:(id)a0;
- (void)updateGeometryToReplaceMediaInfo:(id)a0;

@end

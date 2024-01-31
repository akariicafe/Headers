@class UIFont;

@interface TopoNumberBadge : CALayer {
    id _owningView;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _textSize;
    UIFont *_font;
}

@property (nonatomic) id owningView;
@property (nonatomic) long long count;

+ (void)deallocImageCache;
+ (id)imageBadgeForCount:(long long)a0;
+ (int)initImageCache;

- (void)dealloc;
- (void)layoutSublayers;
- (struct CGSize { double x0; double x1; })preferredFrameSize;
- (id)initWithOwningView:(id)a0;
- (void)calculateBadgeMetrics;
- (struct CGImage { } *)newNumberBadge;

@end

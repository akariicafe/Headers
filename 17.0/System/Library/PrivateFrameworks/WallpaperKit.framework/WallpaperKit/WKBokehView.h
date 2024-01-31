@class CAGradientLayer, WKBokehMotionFilter, CADisplayLink, WKBokehWallpaperInput, NSMutableArray;

@interface WKBokehView : UIView {
    WKBokehMotionFilter *_motionFilter;
    CAGradientLayer *_contentLayer;
    NSMutableArray *_bubbles;
    CADisplayLink *_displayLink;
}

@property (copy, nonatomic) WKBokehWallpaperInput *bokehWallpaperInput;

+ (id)thumbnailImageWithBokehInput:(id)a0;

- (void).cxx_destruct;
- (void)_screenDidUpdate:(id)a0;
- (void)layoutSubviews;
- (id)initWithBokehWallpaperInput:(id)a0;
- (void)setAnimationEnabled:(BOOL)a0;

@end

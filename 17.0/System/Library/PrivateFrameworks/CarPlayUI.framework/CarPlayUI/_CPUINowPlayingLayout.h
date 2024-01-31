@class NSString;

@interface _CPUINowPlayingLayout : NSObject <CPUINowPlayingLayoutProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeAreaFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewAreaFrame;
@property (nonatomic) double displayScale;
@property (nonatomic) BOOL showsArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (BOOL)isEqual:(id)a0;
- (BOOL)playModeControlButtonsFullWidth;
- (unsigned long long)artworkPosition;
- (double)_effectiveAlbumArtWidth;
- (double)_scaledHeight;
- (double)_scaledWidth;
- (double)albumArtWidthMultiplier;
- (id)initWithSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 displayScale:(double)a2 showsArtwork:(BOOL)a3;
- (struct CGSize { double x0; double x1; })maximumNowPlayingSize;
- (struct CGSize { double x0; double x1; })maximumTitleViewSize;
- (double)playModeControlButtonSpacing;
- (double)playModeControlButtonWidth;
- (BOOL)progressViewFullWidth;
- (unsigned long long)trackInfoFontStyle;
- (double)transportControlButtonHeight;
- (double)transportControlButtonSpacing;
- (double)verticalEdgePadding;

@end

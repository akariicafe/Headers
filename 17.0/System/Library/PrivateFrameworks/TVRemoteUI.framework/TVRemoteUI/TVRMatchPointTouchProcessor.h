@class UITapGestureRecognizer, _TVRMatchPointArtworkView;

@interface TVRMatchPointTouchProcessor : TVRTouchProcessor

@property (retain, nonatomic) _TVRMatchPointArtworkView *artworkView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) long long highlightedButtonType;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_handleTap:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)_artworkView;
- (long long)_pressTypeForLocationInTouchpadView:(struct CGPoint { double x0; double x1; })a0;
- (void)_sendButtonPressToDelegate:(long long)a0;
- (void)setTouchpadView:(id)a0;

@end

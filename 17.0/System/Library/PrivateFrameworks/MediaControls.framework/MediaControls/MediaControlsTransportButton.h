@class MPCPlayerCommandRequest, NSString;

@interface MediaControlsTransportButton : MPButton

@property (retain, nonatomic) MPCPlayerCommandRequest *touchUpInsideCommandRequest;
@property (retain, nonatomic) MPCPlayerCommandRequest *holdBeginCommandRequest;
@property (retain, nonatomic) MPCPlayerCommandRequest *holdEndCommandRequest;
@property (nonatomic) BOOL shouldPresentActionSheet;
@property (readonly, nonatomic, getter=isPerformingHighlightAnimation) BOOL performingHighlightAnimation;
@property (nonatomic) double cursorScale;
@property (retain, nonatomic) NSString *identifier;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

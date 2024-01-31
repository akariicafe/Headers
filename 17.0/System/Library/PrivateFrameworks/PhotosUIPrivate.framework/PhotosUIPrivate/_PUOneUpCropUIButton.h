@protocol _PUOneUpCropUIButtonDelegate;

@interface _PUOneUpCropUIButton : UIButton

@property (weak, nonatomic) id<_PUOneUpCropUIButtonDelegate> delegate;
@property (nonatomic, getter=isBeingTouched) BOOL beingTouched;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end

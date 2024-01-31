@class PXVideoOverlayButtonConfiguration;

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {
    PXVideoOverlayButtonConfiguration *_overlayConfiguration;
    id _target;
    SEL _action;
}

@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause;
@property (nonatomic) BOOL showAsPause;

- (void)_handleTap:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end

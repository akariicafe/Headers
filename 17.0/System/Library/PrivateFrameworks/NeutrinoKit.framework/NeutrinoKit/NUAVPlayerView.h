@class AVPlayer;
@protocol NUAVPlayerViewDelegate;

@interface NUAVPlayerView : UIView {
    _Atomic int _updateReadyForDisplayID;
    BOOL _observerDetached;
}

@property (nonatomic, getter=isReadyForDisplay, setter=_setReadyForDisplay:) BOOL readyForDisplay;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) id<NUAVPlayerViewDelegate> delegate;

+ (Class)layerClass;

- (void)dealloc;
- (void)dispose;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateReadyForDisplayWithID:(_Atomic int)a0;

@end

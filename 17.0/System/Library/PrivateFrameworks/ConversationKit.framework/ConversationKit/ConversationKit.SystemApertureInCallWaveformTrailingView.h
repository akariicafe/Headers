@interface ConversationKit.SystemApertureInCallWaveformTrailingView : UIView <SBUISystemApertureAccessoryView> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ animateUpdatesPassthrough;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backdropLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localAudioView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteAudioView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forLayoutMode:(long long)a1;

@end

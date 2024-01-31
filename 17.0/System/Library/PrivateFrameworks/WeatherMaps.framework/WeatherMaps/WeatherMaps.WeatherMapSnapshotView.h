@interface WeatherMaps.WeatherMapSnapshotView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ annotationViewModelFactory;
    void /* unknown type, empty encoding */ mapLocationAccessibilityModelManager;
    void /* unknown type, empty encoding */ overlaySonifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showDebugConsole;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotDisplayView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_borderLayer;
    void /* unknown type, empty encoding */ annotationView;
    void /* unknown type, empty encoding */ annotationViewFractionalCenter;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ errorLabelEffect;
    void /* unknown type, empty encoding */ errorEffectView;
    void /* unknown type, empty encoding */ errorLabel;
    void /* unknown type, empty encoding */ errorPlatterView;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ needsBuild;
    void /* unknown type, empty encoding */ isTransitioningToSnapshotView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)darkerSystemColorsStatusDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didTransitionToSnapshotMap:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)willTransitionToSnapshotMap:(id)a0;

@end

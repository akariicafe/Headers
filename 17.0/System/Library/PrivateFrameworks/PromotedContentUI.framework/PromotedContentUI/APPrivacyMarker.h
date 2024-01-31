@interface APPrivacyMarker : UIButton <APPCVisibilityIgnorable> {
    void /* unknown type, empty encoding */ markerLabel;
    void /* unknown type, empty encoding */ markerView;
    void /* unknown type, empty encoding */ privacyMarkerType;
    void /* unknown type, empty encoding */ privacyMarkerPosition;
    void /* unknown type, empty encoding */ minimumTappableSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)sizeCategoryChanged:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)systemColorStatusChanged:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface MagnifierSupport.MFLivePreviewView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pointsOverlayLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pointsPath;
    void /* unknown type, empty encoding */ textValue;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityExpandedTextValue;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end

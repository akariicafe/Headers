@interface PUPickerSuggestionsView : UIView {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ selectedSuggestion;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ needsRTLInitialOffsetCorrection;
    void /* unknown type, empty encoding */ contentWidthConstraint;
    void /* unknown type, empty encoding */ contentHeightObservation;
    void /* unknown type, empty encoding */ reloadQueue;
}

@property (class, nonatomic, readonly) double verticalMargin;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ photoLibrary;
@property (nonatomic, retain) void /* unknown type, empty encoding */ suggestionGroup;
@property (nonatomic) void /* unknown type, empty encoding */ preferredViewHeight;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)layoutMarginsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithIsProcessing:(BOOL)a0 isDeviceAspectRatioContentMode:(BOOL)a1 contentHasSpecialFilter:(BOOL)a2;

@end

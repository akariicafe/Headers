@class NSString, CNContact, _UILegibilityView, _UILegibilitySettings;

@interface CSUserPictureView : CSCoverSheetViewBase <SBUILegibility> {
    _UILegibilityView *_monogramLegibilityView;
}

@property (copy, nonatomic) CNContact *contact;
@property (nonatomic) double diameter;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_monogrammerForLegibilitySettings:(id)a0 diameter:(double)a1;

- (id)presentationRegions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_regenerateImage;

@end

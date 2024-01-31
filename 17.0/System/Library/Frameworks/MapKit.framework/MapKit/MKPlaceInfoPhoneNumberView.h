@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {
    _MKUILabel *_optsOutOfAdsView;
}

@property (nonatomic) BOOL optsOutOfAds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_icon;
- (id)_valueString;
- (int)analyticsTarget;
- (id)_iconAccessibilityLabel;
- (Class)_labeledValueExpectedValueType;
- (id)draggableContent;
- (id)formatPhoneNumber:(id)a0;

@end

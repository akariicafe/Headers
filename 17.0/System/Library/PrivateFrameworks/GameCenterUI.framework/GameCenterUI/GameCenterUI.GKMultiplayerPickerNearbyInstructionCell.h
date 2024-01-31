@interface GameCenterUI.GKMultiplayerPickerNearbyInstructionCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ textField;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;

+ (double)itemHeightFitting:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end

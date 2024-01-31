@class UILabel, NSString;

@interface FMFindingUI.FMR1DistanceView : UIView {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ styleDistanceLabelFont;
    void /* unknown type, empty encoding */ styleDirectionLabelFont;
    void /* unknown type, empty encoding */ styleLabelHeight;
    void /* unknown type, empty encoding */ distanceLabel;
    void /* unknown type, empty encoding */ directionLabel;
    void /* unknown type, empty encoding */ directionLabelFont;
    void /* unknown type, empty encoding */ distanceLabelHeightConstraint;
    void /* unknown type, empty encoding */ distanceLabelBottomConstraint;
    void /* unknown type, empty encoding */ initialAboveOrBelowTimestamp;
    void /* unknown type, empty encoding */ guide;
    void /* unknown type, empty encoding */ distanceSpring;
    void /* unknown type, empty encoding */ threshold;
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ distance;
    void /* unknown type, empty encoding */ presentedDistance;
}

@property (nonatomic, readonly) UILabel *accessibilityDistanceLabel;
@property (nonatomic, readonly) UILabel *accessibilityDirectionLabel;
@property (nonatomic, readonly) NSString *description;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

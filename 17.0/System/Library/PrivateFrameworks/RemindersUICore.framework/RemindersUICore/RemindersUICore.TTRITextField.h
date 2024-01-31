@class NSString, NSArray;

@interface RemindersUICore.TTRITextField : UITextField {
    void /* unknown type, empty encoding */ ttriAccessibilityLabeledWithPlaceholder;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

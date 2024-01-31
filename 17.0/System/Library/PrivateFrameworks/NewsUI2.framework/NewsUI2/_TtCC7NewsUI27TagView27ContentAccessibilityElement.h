@class NSString, NSArray;

@interface _TtCC7NewsUI27TagView27ContentAccessibilityElement : UIAccessibilityElement

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic) unsigned long long accessibilityTraits;

- (id)init;
- (id)initWithAccessibilityContainer:(id)a0;
- (BOOL)accessibilityActivate;

@end

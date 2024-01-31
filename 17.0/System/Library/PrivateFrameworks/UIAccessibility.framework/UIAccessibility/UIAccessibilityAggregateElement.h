@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement

@property (retain, nonatomic) NSArray *representedElements;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)initWithAccessibilityContainer:(id)a0;
- (void).cxx_destruct;
- (void)addRepresentedObject:(id)a0;
- (id)initWithAccessibilityContainer:(id)a0 representedElements:(id)a1;

@end

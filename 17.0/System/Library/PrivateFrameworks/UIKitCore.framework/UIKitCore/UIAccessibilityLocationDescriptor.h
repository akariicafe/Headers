@class NSString, NSAttributedString, UIView;

@interface UIAccessibilityLocationDescriptor : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSAttributedString *attributedName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAttributedName:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)initWithName:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)initWithName:(id)a0 view:(id)a1;

@end

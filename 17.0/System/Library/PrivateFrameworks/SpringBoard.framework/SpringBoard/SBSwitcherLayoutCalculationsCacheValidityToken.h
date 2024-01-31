@interface SBSwitcherLayoutCalculationsCacheValidityToken : NSObject

@property (nonatomic) unsigned long long appLayoutsGenCount;
@property (nonatomic) unsigned long long continuousExposeIdentifiersGenCount;
@property (nonatomic) long long switcherInterfaceOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerViewBounds;
@property (nonatomic) unsigned long long modifierEventGenCount;

- (BOOL)isEqual:(id)a0;
- (id)initWithAppLayoutsGenCount:(unsigned long long)a0 continuousExposeIdentifiersGenCount:(unsigned long long)a1 switcherInterfaceOrientation:(long long)a2 containerViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 modifierEventGenCount:(unsigned long long)a4;

@end

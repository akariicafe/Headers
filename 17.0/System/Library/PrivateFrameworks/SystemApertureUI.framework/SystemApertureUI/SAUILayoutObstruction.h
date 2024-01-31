@class NSString, UILayoutGuide, UIView;

@interface SAUILayoutObstruction : NSObject <SAUILayoutObstructing>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, copy, nonatomic) NSString *obstacleIdentifier;
@property (readonly, weak, nonatomic) UIView *owningView;
@property (readonly, nonatomic) UILayoutGuide *obstacleLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOwningView:(id)a0 identifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })obstructedFrameInView:(id)a0;

@end

@class CABasicAnimation, NSString;

@interface VUIRectAnimationAction : NSObject <CAAction>

@property (retain, nonatomic) CABasicAnimation *animationToRun;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromRect;
@property (retain, nonatomic) NSString *key;

- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void).cxx_destruct;

@end

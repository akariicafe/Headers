@class CABasicAnimation, NSString;

@interface VUIPointAnimationAction : NSObject <CAAction>

@property (retain, nonatomic) CABasicAnimation *animationToRun;
@property (nonatomic) struct CGPoint { double x; double y; } fromPoint;
@property (retain, nonatomic) NSString *key;

- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void).cxx_destruct;

@end

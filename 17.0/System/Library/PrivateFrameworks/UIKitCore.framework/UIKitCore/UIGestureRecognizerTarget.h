@interface UIGestureRecognizerTarget : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (id)description;
- (void).cxx_destruct;

@end

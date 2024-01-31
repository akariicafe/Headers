@class CATState;

@interface CATTransition : NSObject

@property (readonly, weak, nonatomic) CATState *state;
@property (readonly, nonatomic) SEL action;

+ (id)new;

- (id)init;
- (id)initWithState:(id)a0 action:(SEL)a1;
- (id)description;
- (void).cxx_destruct;

@end

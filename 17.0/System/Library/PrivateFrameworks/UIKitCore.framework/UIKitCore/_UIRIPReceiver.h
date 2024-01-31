@class UIResponder, UIPress, UIPressesEvent;

@interface _UIRIPReceiver : NSObject {
    UIPressesEvent *_event;
}

@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) Class clazz;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) UIPress *press;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithResponder:(id)a0 class:(Class)a1 press:(id)a2 inPhase:(long long)a3 withEvent:(id)a4;

@end

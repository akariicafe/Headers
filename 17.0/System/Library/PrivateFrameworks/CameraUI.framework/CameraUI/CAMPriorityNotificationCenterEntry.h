@interface CAMPriorityNotificationCenterEntry : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id object;

- (id)initWithObserver:(id)a0 selector:(SEL)a1 object:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end

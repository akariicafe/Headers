@interface RTObserverRecord : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) SEL selector;

- (id)initWithObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end

@interface _PUTimerTarget : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void).cxx_destruct;
- (void)handleTimer:(id)a0;

@end

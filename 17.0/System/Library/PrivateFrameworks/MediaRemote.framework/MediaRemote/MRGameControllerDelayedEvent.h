@interface MRGameControllerDelayedEvent : NSObject

@property (nonatomic) unsigned long long lastDownEvent;
@property (copy, nonatomic) id /* block */ sendEventBlock;

- (void)send;
- (void).cxx_destruct;

@end

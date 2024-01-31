@interface MSTimerGate : NSObject

@property (nonatomic) BOOL enabled;

- (void)enable;
- (id)init;
- (void)disable;

@end

@interface STKMutableSessionBehavior : STKSessionBehavior

@property (nonatomic) double timeout;
@property (nonatomic) BOOL shouldSendResponseUponDisplay;
@property (nonatomic) BOOL dismissesAfterUserEvent;

- (void)setTimeout:(double)a0;
- (void)setDismissesAfterUserEvent:(BOOL)a0;
- (void)setShouldSendResponseUponDisplay:(BOOL)a0;

@end

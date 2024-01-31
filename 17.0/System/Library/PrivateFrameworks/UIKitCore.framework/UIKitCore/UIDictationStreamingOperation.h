@interface UIDictationStreamingOperation : NSBlockOperation

@property (nonatomic) long long selectionChangeDelta;

- (void)start;

@end

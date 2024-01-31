@interface WDCancellationToken : NSObject {
    BOOL _cancelled;
}

@property (nonatomic, getter=isCancelled) BOOL cancelled;

- (void)cancel;

@end

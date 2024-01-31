@interface CATransactionCompletionItem : NSObject {
    void *_priv;
}

+ (id)completionItem;

- (id)init;
- (void)dealloc;
- (void)invalidate;

@end

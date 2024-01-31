@interface WBSExtensionMessageReplySender : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)sendReplyIfNotAlreadySent:(id)a0;

@end

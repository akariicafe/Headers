@class NSString;

@interface NPKMessageCompositionManager : NSObject {
    NSString *_listenerID;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_sendComposition:(id)a0 toRecipient:(id)a1 completion:(id /* block */)a2;
- (void)sendMessage:(id)a0 withAppExtensionIdentifier:(id)a1 toRecipient:(id)a2 completion:(id /* block */)a3;

@end

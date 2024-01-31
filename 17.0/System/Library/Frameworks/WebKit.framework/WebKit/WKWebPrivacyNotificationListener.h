@interface WKWebPrivacyNotificationListener : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } _linkFilteringDataCallback;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didUpdate:(id)a0;
- (void)listenForLinkFilteringDataChanges:(id /* block */)a0;

@end

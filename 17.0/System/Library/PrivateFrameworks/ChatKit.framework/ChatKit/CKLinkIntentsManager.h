@interface CKLinkIntentsManager : NSObject {
    void /* unknown type, empty encoding */ messagesNavigator;
    void /* unknown type, empty encoding */ chatController;
}

@property (class, nonatomic, readonly) CKLinkIntentsManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)purgeDependencies;
- (void)registerChatController:(id)a0;
- (void)registerDependencyWithDetailsController:(id)a0;
- (void)registerMessagesNavigator:(id)a0;

@end

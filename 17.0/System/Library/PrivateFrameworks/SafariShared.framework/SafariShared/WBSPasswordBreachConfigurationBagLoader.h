@class NSString, WBSRemotePlistController;

@interface WBSPasswordBreachConfigurationBagLoader : NSObject <WBSRemotePlistControllerDelegate> {
    WBSRemotePlistController *_remotePlistController;
}

@property (class, readonly, nonatomic) WBSPasswordBreachConfigurationBagLoader *sharedLoader;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

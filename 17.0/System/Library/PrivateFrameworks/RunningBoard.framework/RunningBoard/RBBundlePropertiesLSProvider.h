@class NSString, NSCache;
@protocol RBBundlePropertiesLSProviderDelegate;

@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSCache *_propertiesByIdentity;
    id<RBBundlePropertiesLSProviderDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<RBBundlePropertiesLSProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)dealloc;
- (id)propertiesForIdentity:(id)a0;
- (void).cxx_destruct;

@end

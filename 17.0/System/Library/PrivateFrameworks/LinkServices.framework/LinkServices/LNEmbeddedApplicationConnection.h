@class FBSOpenApplicationService, PDCPreflightManager, NSString, NSOperationQueue;

@interface LNEmbeddedApplicationConnection : LNApplicationConnection <NSXPCListenerDelegate>

@property (class, readonly, nonatomic) NSOperationQueue *sharedOpenApplicationOperationQueue;

@property (readonly, nonatomic) FBSOpenApplicationService *openApplicationService;
@property (readonly, nonatomic) PDCPreflightManager *preflightManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)connectionOptionsClass;
+ (id)optionsForAction:(id)a0 interactionMode:(long long)a1 source:(unsigned short)a2;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)enqueueOpenApplicationOperation:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 error:(id *)a2;
- (void)openApplicationWithOptions:(id)a0 connectionAction:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)refreshWithOptions:(id)a0;
- (void)resumeOpenApplicationOperationQueue;

@end

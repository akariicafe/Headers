@class NSString, NSDictionary, _MXExtensionProvider, NSSet, NSExtension;

@interface _MXExtension : NSObject

@property (class, nonatomic) BOOL shouldDeserializeCacheItems;

@property (readonly, nonatomic) NSExtension *extension;
@property (weak, nonatomic) _MXExtensionProvider *provider;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;

- (id)startSendingUpdatesForIntent:(id)a0 toObserver:(id)a1;
- (id)resolveIntentSlot:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;
- (id)_iconForTableUI;
- (id)_containingAppIdentifer;
- (id)_iconWithFormat:(int)a0;
- (BOOL)_isIntentExtension;
- (BOOL)_isMapsExtension;
- (void)_loadCacheItems:(id)a0;
- (BOOL)_setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)canSupportIntent:(id)a0;
- (BOOL)canSupportIntentClass:(Class)a0;
- (id)confirmIntent:(id)a0 expectResponseClass:(Class)a1 withCompletion:(id /* block */)a2;
- (id)handleIntent:(id)a0 expectResponseClass:(Class)a1 withCompletion:(id /* block */)a2;
- (id)handleRequest:(id)a0 requestDispatcher:(id)a1 completion:(id /* block */)a2;
- (id)initWithExtensionIdentifier:(id)a0 extensionProvider:(id)a1;
- (id)siblingExtensions;
- (void)startExtensionServiceWithInputItems:(id)a0 begin:(id /* block */)a1 completion:(id /* block */)a2;
- (id)startSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1 toObserver:(id)a2;

@end

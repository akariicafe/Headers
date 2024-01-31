@class NSString, WKContentRuleListStore;

@interface _WKUserContentExtensionStore : NSObject <WKObject> {
    struct RetainPtr<WKContentRuleListStore> { void *m_ptr; } _contentRuleListStore;
}

@property (readonly, nonatomic) WKContentRuleListStore *_contentRuleListStore;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultStore;
+ (id)storeWithURL:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithWKContentRuleListStore:(id)a0;
- (void)_invalidateContentExtensionVersionForIdentifier:(id)a0;
- (void)_removeAllContentExtensions;
- (void)compileContentExtensionForIdentifier:(id)a0 encodedContentExtension:(id)a1 completionHandler:(id /* block */)a2;
- (void)lookupContentExtensionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeContentExtensionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end

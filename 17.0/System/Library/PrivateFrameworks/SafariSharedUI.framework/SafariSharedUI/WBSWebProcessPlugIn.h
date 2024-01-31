@class NSArray, WKWebProcessPlugInController, NSString, NSMapTable, WBSSearchProvider;

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {
    NSMapTable *_browserContextControllersToWebProcessPlugInPageControllers;
}

@property (readonly, nonatomic) WKWebProcessPlugInController *plugInController;
@property (readonly, nonatomic) NSArray *searchEnginesForRedirectToSafeSearch;
@property (readonly, nonatomic) WBSSearchProvider *defaultSearchProvider;
@property (readonly, nonatomic, getter=isParsecABTestingEnabled) BOOL parsecABTestingEnabled;
@property (readonly, nonatomic) unsigned long long parsecABGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageControllerWithBrowserContextController:(id)a0;
- (void).cxx_destruct;
- (void)webProcessPlugIn:(id)a0 didCreateBrowserContextController:(id)a1;
- (void)webProcessPlugIn:(id)a0 initializeWithObject:(id)a1;
- (void)webProcessPlugIn:(id)a0 willDestroyBrowserContextController:(id)a1;
- (void)didCreatePageController:(id)a0 forBrowserContextController:(id)a1;
- (void)willDestroyPageController:(id)a0 forBrowserContextController:(id)a1;

@end

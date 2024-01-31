@class _SFWebProcessPlugInReaderEnabledPageController, WKWebProcessPlugInScriptWorld;

@interface _SFReaderWebProcessPlugInPageController : _SFWebProcessPlugInPageController {
    struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> { struct __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> { struct WebProcessPlugInReaderJSController *__value_; } __ptr_; } _readerJSController;
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;
}

@property (weak, nonatomic) _SFWebProcessPlugInReaderEnabledPageController *originalPageController;

+ (id)readerPageControllerForContextHandle:(id)a0;

- (void)loadNewArticle;
- (id).cxx_construct;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (void)setConfiguration:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 globalObjectIsAvailableForFrame:(id)a1 inScriptWorld:(id)a2;
- (void).cxx_destruct;
- (void)willDestroyBrowserContextController:(id)a0;
- (void)setReaderIsActive:(BOOL)a0;
- (void)_initializeReaderJSControllerForFrame:(id)a0;
- (id)collectReaderContentFromPrintAndMailingFrame;
- (id)isolatedWorldForNextPageDetection;
- (struct OpaqueJSValue { } *)originalArticleFinder;
- (id)printingMailingFrame;
- (void)reloadArticle;
- (void)setArticleLocale:(id)a0;

@end

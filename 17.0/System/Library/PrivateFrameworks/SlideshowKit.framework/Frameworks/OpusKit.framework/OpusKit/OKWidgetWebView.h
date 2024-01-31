@class NSString, NSDictionary, UIWebView;

@interface OKWidgetWebView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetWebViewProxyExports> {
    BOOL _scaleToFit;
    NSString *_webDidLoadActionScript;
}

@property (copy, nonatomic) NSString *urlText;
@property (copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) BOOL isFrameLoaded;
@property (copy, nonatomic) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)valueForUndefinedKey:(id)a0;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (void)layoutSubviews;
- (id)settingObjectForKey:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)prepareForRefresh;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)reloadWebView;
- (void)setSettingOptions:(id)a0;
- (void)setSettingScaleToFit:(BOOL)a0;
- (void)setSettingUrlText:(id)a0;
- (void)setSettingWebDidLoadActionScript:(id)a0;
- (id)settingOptions;
- (BOOL)settingScaleToFit;
- (id)settingUrlText;

@end

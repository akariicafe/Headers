@class NSURL, OKPresentationViewController, OKDocument;

@interface OKWidgetOpusView : OKWidgetView {
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (void)layoutSubviews;
- (void)_loadDocumentIfNeeded;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setSettingUrl:(id)a0;

@end

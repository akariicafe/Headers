@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity {
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_beforeActivity;
- (id)initWithActivityViewElement:(id)a0 clientContext:(id)a1;

@end

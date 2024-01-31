@class UIActivityViewController, WBSWebExtensionData, SFWebExtensionPageMenuController;
@protocol WBSWebExtensionTab;

@interface _SFWebExtensionActivity : UIActivity {
    WBSWebExtensionData *_webExtension;
    id<WBSWebExtensionTab> _tab;
    SFWebExtensionPageMenuController *_pageMenuController;
}

@property (weak, nonatomic) UIActivityViewController *parentViewController;

- (id)activityType;
- (id)activityTitle;
- (BOOL)_isEnabled;
- (void).cxx_destruct;
- (id)_activityImage;
- (void)performActivity;
- (BOOL)_isDisabled;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (id)_activityStatusImage;
- (id)_activityStatusTintColor;
- (BOOL)_managesOwnPresentation;
- (BOOL)_wantsOriginalImageColor;
- (void)_reloadActivity;
- (void)_reloadActivitySoon;
- (id)initWithPageMenuController:(id)a0 webExtension:(id)a1 tab:(id)a2;

@end

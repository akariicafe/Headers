@class BrowserController;

@interface ApplicationShortcutController : NSObject

@property (weak, nonatomic) BrowserController *browserController;

+ (id)_shortcutItemWithType:(id)a0 systemImageName:(id)a1;
+ (void)updateShortcutItemsIfNeeded;
+ (id)_shortcutItems;

- (void).cxx_destruct;
- (BOOL)_handleActionWithType:(id)a0;
- (void)_openNewEmptyTabWithURLFieldFocused:(BOOL)a0 privateBrowsingState:(long long)a1;
- (void)_showBookmarksPanelWithSelectedCollection:(id)a0;
- (BOOL)handleActionWithType:(id)a0;
- (BOOL)handleShortcutItemWithType:(id)a0;

@end

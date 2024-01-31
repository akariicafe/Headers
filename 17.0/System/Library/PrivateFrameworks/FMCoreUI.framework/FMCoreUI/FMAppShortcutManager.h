@interface FMAppShortcutManager : NSObject

@property (readonly) BOOL hasShortcutItems;

+ (id)sharedInstance;

- (void)setShortcutItems:(id)a0;
- (void)setShortcutItem:(id)a0;
- (void)clearShortcutItems;
- (id)createShortcutForItem:(id)a0;
- (void)removeShortcutItemWithIentifier:(id)a0;

@end

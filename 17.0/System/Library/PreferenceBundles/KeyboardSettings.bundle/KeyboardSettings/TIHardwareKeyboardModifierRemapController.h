@class NSMutableArray, NSMutableDictionary;

@interface TIHardwareKeyboardModifierRemapController : PSListController {
    struct __IOHIDEventSystemClient { } *_eventSystemClient;
    NSMutableArray *_keyboards;
    unsigned long long _keysSectionStart;
    struct __IOHIDServiceClient { } *_currentKeyboard;
    NSMutableDictionary *_remapping;
}

@property (readonly, nonatomic) struct __IOHIDServiceClient { } *currentKeyboard;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (id)keyboardsSectionSpecifiers;
- (id)keysSectionSpecifiers;
- (void)loadKeyboards;
- (void)loadRemapping;
- (id)newSpecifiers;
- (void)reloadSpecifiersWithAnimation;
- (void)resetRemapping;
- (void)saveRemapping;
- (void)setRemappingFromKey:(id)a0 toValue:(id)a1;
- (id)subtitleForSpecifier:(id)a0;
- (id)valueForRemappingKey:(id)a0;

@end

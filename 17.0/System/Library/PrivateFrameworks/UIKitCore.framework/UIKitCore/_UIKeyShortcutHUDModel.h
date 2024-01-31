@class NSMutableDictionary, NSMapTable, NSMutableSet, _UIKeyShortcutHUDMenu, _UIMenuLeafValidation;

@interface _UIKeyShortcutHUDModel : NSObject <NSSecureCoding> {
    NSMapTable *_displayableAppKeyCommandToModelShortcutMap;
    NSMutableSet *_performableAppKeyCommands;
    NSMutableSet *_equivalentKeyCommandsInPriorityAlreadyEnumerated;
    NSMapTable *_appKeyCommandToModelKeyCommandMap;
    struct __GSKeyboard { } *_gsKeyboard;
    _UIMenuLeafValidation *_validation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *modelKeyCommands;
@property (retain, nonatomic) NSMapTable *modelKeyCommandToModelShortcutMap;
@property (retain, nonatomic) NSMutableDictionary *modelKeyCommandToAppKeyCommandMap;
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *menu;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)modelForCurrentMenu;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_addShortcutsFromHUDMenu:(id)a0 toShortcutsArray:(id)a1;
- (void)_buildMenu;
- (void)_enumerateKeyCommandsInMenu:(id)a0 block:(id /* block */)a1;
- (id)_finalizedHUDMenuFromValidatedHUDMenu:(id)a0;
- (BOOL)_isKeyCommandPerformable:(id)a0 outTarget:(out id *)a1;
- (id)_menuByOmittingNonKeyCommandsInMenu:(id)a0;
- (id)_responderBasedKeyCommandsStartingAtResponder:(id)a0;
- (id)_sanitizedMainMenu;
- (void)_validateBaseKeyCommand:(id)a0 usingAlternate:(id)a1;
- (void)_validateKeyCommandAndAlternates:(id)a0;
- (id)_validatedHUDMenuFromUIMenu:(id)a0;
- (id)appKeyCommandForSelectedKeyCommand:(id)a0;
- (id)menuWithAlternatesForModifierFlags:(long long)a0;
- (id)modelKeyCommandsExcludingHUDCommands:(id)a0;
- (id)modelShortcutForModelKeyCommand:(id)a0;
- (id)originalTargetForSelectedKeyCommand:(id)a0;
- (id)searchMenuWithSearchText:(id)a0 maxSearchResultEntries:(unsigned long long)a1;

@end

@class NSArray, PSSpecifier, ASTLockScreenSuggestionsGlobalController, ASTLockScreenSuggestionSpecifier;

@interface ASTLockScreenSuggestionsDetailListController : PSListController {
    ASTLockScreenSuggestionSpecifier *_lockScreenSpecifier;
    PSSpecifier *_perAppGroup;
    NSArray *_perAppSpecifiers;
    ASTLockScreenSuggestionsGlobalController *_globalController;
    PSSpecifier *_globalSpecifier;
}

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_handleGlobalToggleChangeWithEnabled:(BOOL)a0;

@end

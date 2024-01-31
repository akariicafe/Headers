@class NSSet, NSDictionary, SFWebExtensionsController;

@interface SFBrowserMenuProvider : NSObject {
    NSDictionary *_personaToMenusMap[4];
    NSSet *_personaToCommandSetMap[4];
    long long _persona;
}

@property (class, readonly, nonatomic) SFBrowserMenuProvider *sharedProvider;

@property (retain, nonatomic) SFWebExtensionsController *webExtensionsController;

- (id)init;
- (void).cxx_destruct;
- (void)_setMenusIfNecessaryForPersona:(long long)a0;
- (id)_extensionsMenu;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 wantsPriorityOverSystemBehavior:(BOOL)a4 webInterceptable:(BOOL)a5 property:(unsigned long long)a6 alternates:(id)a7;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4 alternates:(id)a5;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4 property:(unsigned long long)a5 alternates:(id)a6;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 webInterceptable:(BOOL)a3 property:(unsigned long long)a4;
- (void)_enabledExtensionsDidChange;
- (id)_newDocumentCommands;
- (id)_placeholderCommandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3;
- (void)_setMenusForPersona:(long long)a0 withBuilder:(id)a1;
- (id)_switchToProfileCommands;
- (id)_switchToTabCommands;
- (void)clearCachedMenuForPersona:(long long)a0;
- (BOOL)commandConflictsWithTextEditing:(id)a0;
- (void)rebuildMenuIfNeededForPersona:(long long)a0;
- (void)setMenusForSafariWithBuilder:(id)a0;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)a0;

@end

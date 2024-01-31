@class NSString, NSSet;

@interface ASTLockScreenSuggestionSpecifier : NSObject <PSSpecifierGroup> {
    NSSet *_disabledLockScreenBundles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)isLockScreenSwitchEnabled:(id)a0;
- (void)setLockScreenSwitchEnabled:(id)a0 forSpecifier:(id)a1;
- (id)specifierForBundleID:(id)a0;

@end

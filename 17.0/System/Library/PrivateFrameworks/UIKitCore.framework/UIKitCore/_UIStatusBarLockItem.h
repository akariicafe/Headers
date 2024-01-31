@class NSString, NSTimer, _UIExpandingGlyphsView, _UIStatusBarIdentifier, _UIStatusBarLockView;

@interface _UIStatusBarLockItem : _UIStatusBarItem <_UIBasicAnimationFactory>

@property (class, readonly) _UIStatusBarIdentifier *textDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarLockView *lockView;
@property (retain, nonatomic) _UIExpandingGlyphsView *stringView;
@property (retain, nonatomic) NSTimer *lockDisappearanceTimer;
@property (nonatomic) BOOL showsLock;
@property (nonatomic) long long unlockFailureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)dependentEntryKeys;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_lockView;
- (void)_create_stringView;

@end

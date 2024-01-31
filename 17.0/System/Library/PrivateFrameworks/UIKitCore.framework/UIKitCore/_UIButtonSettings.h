@class NSString;

@interface _UIButtonSettings : PTSettings <PTSettingsKeyObserver>

@property (nonatomic) BOOL highlightMode;
@property (nonatomic) BOOL highlightSubclasses;
@property (nonatomic) BOOL highlightIgnoresBars;
@property (nonatomic) BOOL highlightBelow;
@property (nonatomic) BOOL highlightAlternateColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithDefaultValues;

@end

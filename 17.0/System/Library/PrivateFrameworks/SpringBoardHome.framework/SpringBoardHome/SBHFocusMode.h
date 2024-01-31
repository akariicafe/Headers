@class UIColor, SBFolder, NSString, NSMutableSet, NSArray;

@interface SBHFocusMode : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) SBFolder *folder;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, getter=isSleepFocus) BOOL sleepFocus;
@property (readonly, nonatomic) BOOL customizedHomeScreenPagesEnabled;
@property (nonatomic) BOOL showsOnlyAllowedApplicationBadges;
@property (nonatomic) BOOL hidesOnlyDeniedApplicationBadges;
@property (copy, nonatomic) NSMutableSet *allowedApplicationBundleIdentifiers;
@property (copy, nonatomic) NSMutableSet *deniedApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *lists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)removeFromList:(id)a0;
- (void)addToList:(id)a0;
- (id)initWithIdentifier:(id)a0 folder:(id)a1;
- (BOOL)wantsListVisible:(id)a0;

@end

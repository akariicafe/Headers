@interface UIFocusDebugger : NSObject

+ (id)status;
+ (id)_ancestryForEnvironment:(id)a0;
+ (id)_legacy_checkFocusabilityForView:(id)a0;
+ (id)_statusForFocusSystem:(id)a0 scene:(id)a1 includeSceneLog:(BOOL)a2 includeDeferralTarget:(BOOL)a3;
+ (id)_verboseStatus;
+ (id)checkFocusGroupTreeForEnvironment:(id)a0;
+ (id)checkFocusabilityForItem:(id)a0;
+ (id)focusGroupsForEnvironment:(id)a0;
+ (id)help;
+ (id)preferredFocusEnvironmentsForEnvironment:(id)a0;
+ (id)simulateFocusUpdateRequestFromEnvironment:(id)a0;

@end

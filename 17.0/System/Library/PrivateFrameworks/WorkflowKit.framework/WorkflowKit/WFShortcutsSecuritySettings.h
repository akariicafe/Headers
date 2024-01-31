@interface WFShortcutsSecuritySettings : NSObject

+ (BOOL)allowsSharingLargeAmountsOfData;
+ (BOOL)allowsDeletingLargeAmountsOfData;
+ (BOOL)allowsDeletingWithoutConfirmation;
+ (BOOL)areScriptingActionsEnabled;
+ (id)scripingActionDisabledErrorWithActionName:(id)a0;

@end

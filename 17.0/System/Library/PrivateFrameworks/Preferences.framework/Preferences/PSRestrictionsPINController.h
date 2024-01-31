@interface PSRestrictionsPINController : DevicePINController

+ (BOOL)settingEnabled;

- (id)init;
- (void)setPIN:(id)a0;
- (id)title;
- (BOOL)validatePIN:(id)a0;
- (id)pinInstructionsPrompt;
- (id)stringsBundle;
- (struct __CFString { } *)blockedStateKey;
- (struct __CFString { } *)blockTimeIntervalKey;
- (struct __CFString { } *)defaultsID;
- (struct __CFString { } *)failedAttemptsKey;
- (BOOL)isNumericPIN;
- (id)pinInstructionsPromptFont;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (int)pinLength;
- (BOOL)simplePIN;

@end

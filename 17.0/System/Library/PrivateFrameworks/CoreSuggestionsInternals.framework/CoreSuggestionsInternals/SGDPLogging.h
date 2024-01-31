@interface SGDPLogging : NSObject

+ (id)_tokenizeTitle:(id)a0;
+ (id)_boolMaskVectorForTokens:(id)a0;
+ (void)_logReminderTitleSequence:(id)a0 recorderKey:(id)a1;
+ (void)_logReminderTitleUnknownTokens:(id)a0 recorderKey:(id)a1;
+ (id)_loggableTitleSequence:(id)a0 withMask:(id)a1;
+ (id)_loggableUnknownTokenSequence:(id)a0 withMask:(id)a1;
+ (void)logActionVerb:(id)a0 actionType:(unsigned short)a1;
+ (void)logReminder:(id)a0 actionType:(unsigned short)a1;
+ (void)logReminderTitle:(id)a0 actionType:(unsigned short)a1;
+ (void)logUserCreatedReminderTitle:(id)a0;

@end

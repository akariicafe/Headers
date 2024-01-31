@interface DASharedAccountProperties : NSObject

+ (id)leafAccountTypes;
+ (id)CalDAVSubscribedCalendarsKey;
+ (id)SubCalSubscriptionURLKey;
+ (id)SubCalFilterAlarmsKey;
+ (id)DAAccountPrincipalPath;
+ (id)DAAccountIdentifiersToIgnoreForUniquenessCheck;
+ (id)leafAccountTypesToCheckForEquality;
+ (id)DAAccountSavePreflighted;
+ (id)SubCalInsecureConnectionApproved;
+ (id)SubCalTitleKey;
+ (id)parentAccountTypes;
+ (id)DACardDAVAccountDSID;
+ (id)DAAccountDoNotSaveReason;

@end

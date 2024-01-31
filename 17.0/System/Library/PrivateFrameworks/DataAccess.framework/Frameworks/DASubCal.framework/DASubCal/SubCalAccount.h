@class NSString, NSDictionary, NSData, NSURL, DACoreDAVTaskManager;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate, DASubCalAccount>

@property (retain, nonatomic) NSData *tmpICSData;
@property (nonatomic) BOOL shouldRemoveAlarms;
@property (nonatomic) BOOL shouldRemoveAttachments;
@property (retain, nonatomic) NSString *syncId;
@property (retain, nonatomic) NSDictionary *externalRepresentation;
@property (readonly, nonatomic) NSURL *subscriptionURL;
@property (retain, nonatomic) NSString *calDAVURLPath;
@property (readonly, nonatomic) NSString *calendarExternalId;
@property (nonatomic) double refreshInterval;
@property (nonatomic) BOOL useFTP;
@property (nonatomic) BOOL isManagedCalendar;
@property (readonly, nonatomic) BOOL isChinaHolidayCalendar;
@property (readonly, nonatomic) BOOL isSyncedHolidayCalendar;
@property (readonly, nonatomic) BOOL isHolidaySubscribedCalendar;
@property (nonatomic) BOOL allowInsecureConnection;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (nonatomic) int subCalAccountVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountDescription;
- (void)setAccountDescription:(id)a0;
- (BOOL)isEqualToAccount:(id)a0;
- (void)setHost:(id)a0;
- (void).cxx_destruct;
- (id)localizedInvalidPasswordMessage;
- (BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)a0;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (id)initWithBackingAccountInfo:(id)a0;
- (BOOL)isSubscribedCalendarAccount;
- (id)localizedIdenticalAccountFailureMessage;
- (id)onBehalfOfBundleIdentifier;
- (void)removeDBSyncDataForAccountChange:(id)a0;
- (void)setVersionForNewAccount;
- (BOOL)upgradeAccount;
- (void)clearTmpICSData;
- (void)_checkValidityWithConsumer:(id)a0 quickValidate:(BOOL)a1;
- (id)_tmpICSCalendarPath;
- (int)currentAccountVersion;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasSubscribedCalendarAtURL:(id)a0;
- (void)quickValidate:(id)a0;
- (void)refreshAllCalendars:(BOOL)a0;
- (BOOL)removeDataFromCalendar:(id)a0 forAccountChange:(id)a1;
- (void)saveTmpICSData;
- (void)setCurrentAccountVersion:(int)a0;
- (void)subCalValidationTask:(id)a0 downloadProgressedTo:(long long)a1 outOf:(long long)a2;
- (void)subCalValidationTask:(id)a0 finishedWithError:(id)a1 calendarName:(id)a2 document:(id)a3 calendarData:(id)a4;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)a0 inStore:(id)a1 parentAccount:(id)a2;

@end

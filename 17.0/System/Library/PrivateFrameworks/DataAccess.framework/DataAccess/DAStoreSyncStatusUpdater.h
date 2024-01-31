@interface DAStoreSyncStatusUpdater : NSObject

+ (unsigned long long)_ekAccountErrorFromCoreDAVHTTPStatusCode:(long long)a0;
+ (void)syncStartedForCalendar:(id)a0;
+ (void)_updateStatusForStoreWithExternalID:(id)a0 lastSyncStartDate:(id)a1 lastSyncEndDate:(id)a2 lastSyncError:(id)a3 canceled:(BOOL)a4;
+ (void)syncStartedForCalendarWithExternalID:(id)a0 sourceExternalID:(id)a1;
+ (void)_updateStatusForCalendar:(id)a0 lastSyncStartDate:(id)a1 lastSyncEndDate:(id)a2 lastSyncError:(id)a3 canceled:(BOOL)a4;
+ (unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)a0;
+ (void)syncEndedForCalendar:(id)a0 withError:(id)a1;
+ (id)_eventStore;
+ (unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)a0;
+ (unsigned long long)_accountErrorCodeForNSError:(id)a0;
+ (void)resetSyncStatusForAllStoresIfNecessary;
+ (void)syncStartedForStoreWithExternalID:(id)a0;
+ (unsigned long long)_ekAccountErrorFromURLError:(id)a0;
+ (void)_updateStatusForCalendarWithExternalID:(id)a0 sourceExternalID:(id)a1 lastSyncStartDate:(id)a2 lastSyncEndDate:(id)a3 lastSyncError:(id)a4 canceled:(BOOL)a5;
+ (id)_eventStorePurger;
+ (unsigned long long)_codeForLastSyncError:(id)a0 userInfo:(id *)a1;
+ (void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)a0;
+ (void)syncEndedForCalendarWithExternalID:(id)a0 sourceExternalID:(id)a1 withError:(id)a2;
+ (id)_mappedAccountErrorFromError:(id)a0;
+ (unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)a0;
+ (void)_updateStatusForSource:(id)a0 lastSyncStartDate:(id)a1 lastSyncEndDate:(id)a2 lastSyncError:(id)a3 canceled:(BOOL)a4;
+ (void)syncEndedForStoreWithExternalID:(id)a0 withError:(id)a1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)a0;
+ (BOOL)_isCanceledError:(id)a0;

@end

@interface CUIKSubscribedCalendarManager : NSObject {
    unsigned long long _calendarSaveMonitoringToken;
    unsigned long long _accountsSaveMonitoringToken;
}

- (void)restartDAAfterCalendarUpdates;
- (void)shutdownDAForCalendarUpdates;
- (void)updateOrCreateAccountWithCalendar:(id)a0 previousAccountID:(id)a1 newUsername:(id)a2 newPassword:(id)a3 newAllowsInsecureConnections:(BOOL)a4;
- (id)_accountDescriptionForCalendar:(id)a0;
- (id)_createCalDAVChildSubCalAccountForCalendar:(id)a0 inAccountStore:(id)a1;
- (id)_createLocalSubCalAccountForCalendar:(id)a0 inAccountStore:(id)a1;
- (id)_createSubcalAccountForCalendar:(id)a0 inAccountStore:(id)a1 newAccountNeedsSaving:(BOOL *)a2;
- (void)_saveAccount:(id)a0 inStore:(id)a1 updated:(BOOL)a2;
- (void)_updateAccount:(id)a0 inAccountStore:(id)a1 withCalendar:(id)a2 oldAccount:(id)a3 newAccountDirty:(BOOL)a4 newUsername:(id)a5 newPassword:(id)a6 newAllowsInsecureConnections:(BOOL)a7;
- (void)restartDAAfterAccountUpdates;
- (void)shutdownDAForAccountUpdates;

@end

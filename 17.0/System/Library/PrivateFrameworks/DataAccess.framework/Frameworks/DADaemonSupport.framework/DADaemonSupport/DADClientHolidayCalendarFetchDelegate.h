@class DAAccount, CalDAVCalendarSearchTask;

@interface DADClientHolidayCalendarFetchDelegate : DADClientDelegate {
    CalDAVCalendarSearchTask *_searchTask;
    DAAccount *_syncingAccount;
}

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)_addAuthenticationHeaders;
- (id)_getThrottleDateIfApplicable;
- (void)_handleCalendarSearchResults:(id)a0;
- (void)_sendCompletionWithError:(id)a0 retryThrottleTime:(double)a1;
- (void)_sendResults:(id)a0;
- (void)_setThrottledRetryDateUsingTimeInterval:(double)a0;
- (void)fetchHolidayCalendars;
- (id)syncingAccount;

@end

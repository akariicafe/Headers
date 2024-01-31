@class NSString;

@interface DADClientSubscribedCalendarJunkCheckDelegate : DADClientDelegate

@property (retain, nonatomic) NSString *requestID;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)_createURLRequestForSubscriptionCalendarURL:(id)a0;
- (id)_findCalendarURLFromAccount:(id)a0;
- (void)_finishWithJunkStatusString:(id)a0 error:(id)a1;
- (id)_generateBodyWithURL:(id)a0;
- (void)checkSubscribedCalendarJunkStatus:(id)a0;

@end

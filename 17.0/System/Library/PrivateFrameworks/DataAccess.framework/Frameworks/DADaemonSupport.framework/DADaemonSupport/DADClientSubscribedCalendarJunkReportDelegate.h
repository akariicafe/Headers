@class NSString;

@interface DADClientSubscribedCalendarJunkReportDelegate : DADClientDelegate

@property (retain, nonatomic) NSString *requestID;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)reportSubscribedCalendarAsJunk:(id)a0;
- (id)_createURLRequestForSubscriptionCalendarURL:(id)a0;
- (id)_findCalendarURLFromAccount:(id)a0;
- (id)_generateBodyWithURL:(id)a0;

@end

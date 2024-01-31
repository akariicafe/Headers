@interface HealthRecordsDaemon.URLSessionCertVerificationDelegate : NSObject <NSURLSessionDelegate>

- (id)init;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;

@end

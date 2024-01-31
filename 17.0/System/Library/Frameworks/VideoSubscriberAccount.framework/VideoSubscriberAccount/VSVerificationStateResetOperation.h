@class VSOptional, NSURLSessionTask, NSOperationQueue, VSAuditToken;

@interface VSVerificationStateResetOperation : VSAsyncOperation

@property (retain, nonatomic) NSURLSessionTask *resetStateTask;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)cancel;
- (void)_resetVerificationStateWithURL:(id)a0;

@end

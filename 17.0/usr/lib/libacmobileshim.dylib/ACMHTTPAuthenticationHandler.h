@class NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {
    NSString *_policyVersion;
    NSDate *_startInvocationDate;
}

@property (readonly, nonatomic) NSString *policyVersion;
@property (readonly, nonatomic) NSString *realm;

- (id)requestBody;
- (id)initWithContext:(id)a0;
- (BOOL)shouldReturnResponse:(id)a0 orReportError:(id *)a1;
- (BOOL)shouldValidateTGTs;

@end

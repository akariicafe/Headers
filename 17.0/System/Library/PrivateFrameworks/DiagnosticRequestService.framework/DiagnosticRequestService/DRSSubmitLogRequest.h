@interface DRSSubmitLogRequest : DRSRequest

+ (Class)_moClass;
+ (id)entityName;

- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;
- (id)replyForMessage:(id)a0;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)requestType;

@end

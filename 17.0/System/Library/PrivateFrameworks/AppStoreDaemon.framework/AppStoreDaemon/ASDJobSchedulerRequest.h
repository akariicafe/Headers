@interface ASDJobSchedulerRequest : ASDEphemeralRequest

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)findNextJobsWithCompletionBlock:(id /* block */)a0;

@end

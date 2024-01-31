@interface CoreDAVHeadTask : CoreDAVTask

- (unsigned long long)cachePolicy;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)httpMethod;

@end

@protocol CoreDAVOptionsTaskDelegate;

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVOptionsTaskDelegate> delegate;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)httpMethod;

@end

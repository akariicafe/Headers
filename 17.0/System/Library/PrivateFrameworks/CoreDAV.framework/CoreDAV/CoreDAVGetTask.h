@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;

- (unsigned long long)cachePolicy;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)requestBody;
- (id)description;
- (void).cxx_destruct;
- (id)httpMethod;

@end

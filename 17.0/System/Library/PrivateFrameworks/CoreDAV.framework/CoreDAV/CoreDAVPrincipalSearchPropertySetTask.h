@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)httpMethod;

@end

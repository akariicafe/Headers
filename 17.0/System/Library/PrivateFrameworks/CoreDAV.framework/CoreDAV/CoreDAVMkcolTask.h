@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}

@property (retain, nonatomic) NSSet *propertiesToSet;
@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;

@end

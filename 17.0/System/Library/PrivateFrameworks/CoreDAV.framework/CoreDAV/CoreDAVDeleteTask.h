@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)description;
- (void).cxx_destruct;
- (id)httpMethod;

@end

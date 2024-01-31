@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, nonatomic) id<CoreDAVACLTaskDelegate> delegate;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)initWithAccessControlEntities:(id)a0 atURL:(id)a1;

@end

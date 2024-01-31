@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVCopyTaskDelegate> delegate;

- (void)dealloc;
- (BOOL)validate:(id *)a0;
- (id)httpMethod;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end

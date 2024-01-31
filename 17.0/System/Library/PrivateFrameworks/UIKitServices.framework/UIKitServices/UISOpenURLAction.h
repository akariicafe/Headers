@class NSURL, BSProcessHandle;

@interface UISOpenURLAction : BSAction

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BSProcessHandle *workspaceOriginatingProcess;

- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 workspaceOriginatingProcess:(id)a1 responder:(id)a2;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithURL:(id)a0 workspaceOriginatingProcess:(id)a1;

@end

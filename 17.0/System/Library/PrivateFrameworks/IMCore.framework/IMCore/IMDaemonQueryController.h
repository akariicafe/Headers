@class IMDaemonController, NSMutableDictionary;

@interface IMDaemonQueryController : NSObject

@property (readonly, nonatomic) NSMutableDictionary *queries;
@property (readonly, weak, nonatomic) IMDaemonController *daemonController;

- (void)completeQuery:(id)a0 userInfo:(id)a1;
- (void)failQuery:(id)a0 error:(id)a1;
- (void)_daemonDisconnected:(id)a0;
- (void)completeQuery:(id)a0;
- (void)_validateOutstandingQueries;
- (void).cxx_destruct;
- (void)performQueryWithKey:(id)a0 expectsSynchronousResult:(BOOL)a1 block:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithDaemonController:(id)a0;
- (void)performQueryWithKey:(id)a0 expectsSynchronousResult:(BOOL)a1 block:(id /* block */)a2;
- (void)_completeQuery:(id)a0 success:(BOOL)a1 error:(id)a2 userInfo:(id)a3;

@end

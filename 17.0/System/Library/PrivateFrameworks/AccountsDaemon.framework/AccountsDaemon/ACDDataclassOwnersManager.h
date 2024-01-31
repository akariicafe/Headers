@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isPerformingDataclassActionsForAccount:(id)a0;
- (id)_dataclassOwnersManagerConnection;
- (id)actionsForAddingAccount:(id)a0 affectingDataclass:(id)a1 withError:(id *)a2;
- (id)actionsForDeletingAccount:(id)a0 affectingDataclass:(id)a1 withError:(id *)a2;
- (id)actionsForDisablingDataclass:(id)a0 onAccount:(id)a1 withError:(id *)a2;
- (id)actionsForEnablingDataclass:(id)a0 onAccount:(id)a1 withError:(id *)a2;
- (BOOL)performDataclassActions:(id)a0 forAccount:(id)a1 withChildren:(id)a2 withError:(id *)a3;
- (void)preloadDataclassOwnersWithError:(id *)a0;

@end

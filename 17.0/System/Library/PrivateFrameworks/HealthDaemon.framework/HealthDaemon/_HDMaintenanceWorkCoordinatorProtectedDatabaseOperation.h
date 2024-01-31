@class HDDatabase, HDAssertion, HDDaemonTransaction;

@interface _HDMaintenanceWorkCoordinatorProtectedDatabaseOperation : HDMaintenanceOperation {
    HDDatabase *_database;
    HDAssertion *_accessibilityAssertion;
    HDDaemonTransaction *_transaction;
    id /* block */ _operationBlock;
}

- (void)dealloc;
- (void)main;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 database:(id)a1 operationBlock:(id /* block */)a2;

@end

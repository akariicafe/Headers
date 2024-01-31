@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (id)taskIdentifier;
- (void)launch;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;

@end

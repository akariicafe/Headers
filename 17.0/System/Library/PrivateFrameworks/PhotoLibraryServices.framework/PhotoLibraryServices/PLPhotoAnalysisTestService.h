@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisTestService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
    _Atomic unsigned long long _operationID;
}

- (id)initWithServiceProvider:(id)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)performAsyncLongOperationWithReply:(id /* block */)a0;
- (id)performGetString;

@end

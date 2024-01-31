@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisExecutiveService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
    _Atomic unsigned long long _operationID;
}

- (id)initWithServiceProvider:(id)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestActivityStatusWithReply:(id /* block */)a0;
- (void)requestAnalysisStatusWithReply:(id /* block */)a0;
- (void)performOnDemandTaskWithName:(id)a0 reply:(id /* block */)a1;

@end

@class STStatusBarOverridesStatusDomain, STStatusBarOverridesStatusDomainPublisher, NSObject, STStatusBarData;
@protocol OS_dispatch_queue;

@interface SBSystemStatusStatusBarOverridesArchiver : NSObject {
    STStatusBarOverridesStatusDomain *_overridesDomain;
    STStatusBarOverridesStatusDomainPublisher *_overridesPublisher;
    NSObject<OS_dispatch_queue> *_queue;
    STStatusBarData *_queue_statusBarData;
}

+ (id)_archiveFileURL;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_queue_persistUpdatedData:(id)a0;
- (id)_queue_readStatusBarData;
- (void)_queue_setupObservingAndReconcileInitialState;
- (void)_queue_writeOutStatusBarData:(id)a0;

@end

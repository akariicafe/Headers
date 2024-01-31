@class NSString, NSMapTable, SUDownload, SUInstallOptions;
@protocol SUInstallationConstraintObserverDelegate;

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable> {
    id<SUInstallationConstraintObserverDelegate> _delegate;
    NSMapTable *_queue_observerBlockTokens;
    BOOL _queue_invalidated;
    unsigned long long _queue_tokenCount;
}

@property (nonatomic) id<SUInstallationConstraintObserverDelegate> delegate;
@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly, retain, nonatomic) SUInstallOptions *installOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDownload:(id)a0;
- (id)monitorOfClass:(Class)a0;
- (BOOL)_hasAnyBlockObservers;
- (void)_queue_noteInstallationConstraintMonitor:(id)a0 constraintsDidChange:(unsigned long long)a1;
- (void)_removeToken:(id)a0;
- (id)initWithDownload:(id)a0 andInstallOptions:(id)a1;
- (id)initWithDownload:(id)a0 installOptions:(id)a1 queue:(id)a2 constraints:(id)a3;
- (id)initWithDownload:(id)a0 queue:(id)a1 constraints:(id)a2;
- (id)registerObserverBlock:(id /* block */)a0;

@end

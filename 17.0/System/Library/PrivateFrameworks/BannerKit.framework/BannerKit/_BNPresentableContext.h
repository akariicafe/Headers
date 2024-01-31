@class NSString, NSHashTable, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue, BNPresentable;

@interface _BNPresentableContext : NSObject <BNPresentableContextHostToClientInterface, BNPresentableContext, BSInvalidatable, BNPresentableObservable> {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    NSHashTable *_observers;
    int _presentableAppearState;
    BOOL _valid;
    BOOL _connectionActivated;
}

@property (retain, nonatomic) id<BNPresentable> presentable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_invalidateConnection;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)invalidate;
- (id)_activeConnectionWithError:(out id *)a0;
- (void).cxx_destruct;
- (void)__bannerWillNotAppearWithReason:(id)a0 error:(out id *)a1;
- (oneway void)__bannerWillNotAppearWithReason:(id)a0 reply:(id /* block */)a1;
- (void)__handleTemplateContentEvent:(id)a0 error:(out id *)a1;
- (oneway void)__handleTemplateContentEvent:(id)a0 reply:(id /* block */)a1;
- (void)__setBannerAppearState:(id)a0 reason:(id)a1 error:(out id *)a2;
- (oneway void)__setBannerAppearState:(id)a0 reason:(id)a1 reply:(id /* block */)a2;
- (void)__setUserInteractionWillBegin:(id)a0 error:(out id *)a1;
- (oneway void)__setUserInteractionWillBegin:(id)a0 reply:(id /* block */)a1;
- (void)_runPostConnectionInvalidation;
- (void)_setBannerAppearState:(int)a0 reason:(id)a1;
- (void)addPresentableObserver:(id)a0;
- (id)initWithMachName:(id)a0 presentable:(id)a1;
- (void)removePresentableObserver:(id)a0;
- (void)setHostNeedsUpdate;

@end

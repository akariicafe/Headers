@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SASCallRouteObserver : NSObject <TURouteControllerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL isCallAudioRouteAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserving;
- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)routesChangedForRouteController:(id)a0;
- (void)_updateCallAudioRouteAllowedForRoute:(id)a0;

@end

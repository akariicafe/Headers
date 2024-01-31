@class FBSDisplayLayoutMonitor, NSString, SBMedusa1oSettings, NSObject, SBBackBoardServicesInterface;
@protocol OS_dispatch_queue;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    SBBackBoardServicesInterface *_queue_bksInterface;
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;
    SBMedusa1oSettings *_medusaSettings;
    double _queue_touchRegionBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setTouchRegionBuffer:(double)a0;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (double)touchRegionBuffer;
- (id)_queue_calculateHitTestRegionsFromSceneRects:(id)a0;
- (void)setDisplayLayoutMonitor:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_queue_displayLayoutDidUpdate:(id)a0;
- (id)_queue_calculateTouchRegionsFromSceneRects:(id)a0;
- (id)_initWithBKSInterface:(id)a0 displayLayoutMonitor:(id)a1;
- (id)_queue_floatingHitTestRegionForLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_queue_handleChamoisUILayout:(id)a0;
- (id)displayLayoutMonitor;

@end

@class NSMutableDictionary;

@interface NCMaterialDisplayingCaptureOnlyViewController : UIViewController {
    NSMutableDictionary *_supplementaryMaterialsAndUsageCounts;
}

- (id)init;
- (void)registerMaterialDisplaying:(id)a0 persistent:(BOOL)a1;
- (BOOL)_supportsCaptureForMaterialDisplaying:(id)a0;
- (void)loadView;
- (void)unregisterMaterialDisplaying:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_registerMaterialDisplaying:(BOOL)a0 forDisplaying:(id)a1 persistent:(BOOL)a2;
- (void).cxx_destruct;

@end

@class PXContentPrivacyController, NSString;

@interface PUSlideshowViewModel : PUViewModel <PXChangeObserver>

@property (retain, nonatomic) PXContentPrivacyController *privacyController;
@property (nonatomic) long long currentState;
@property (nonatomic, setter=setWantsChromeVisible:) BOOL wantsChromeVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerChangeObserver:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)unregisterChangeObserver:(id)a0;
- (id)currentChange;
- (void).cxx_destruct;
- (id)newViewModelChange;
- (id)initWithAssetCollection:(id)a0;
- (void)dismissSlideshowIfLocked;
- (void)setWantsChromeVisible:(BOOL)a0 changeReason:(long long)a1;

@end

@class NSString, PXMomentShareStatusPresentation;
@protocol PXCMMFooterViewModelDelegate;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver> {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    long long _mode;
}

@property (weak, nonatomic) id<PXCMMFooterViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateAllProperties;
- (void)_invokeStopSharingActionForInvitation:(id)a0 session:(id)a1;
- (id)initWithMomentShareStatusPresentation:(id)a0 mode:(long long)a1;
- (void).cxx_destruct;

@end

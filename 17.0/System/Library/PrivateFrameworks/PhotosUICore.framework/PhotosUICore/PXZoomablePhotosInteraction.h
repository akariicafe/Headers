@class PXZoomablePhotosViewModel, NSObject;
@protocol PXZoomablePhotosInteractionDelegate, PXAnonymousView;

@interface PXZoomablePhotosInteraction : NSObject {
    double _currentMagnifyEventScale;
    id _eventMonitor;
}

@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (weak, nonatomic) NSObject<PXAnonymousView> *view;
@property (weak, nonatomic) id<PXZoomablePhotosInteractionDelegate> delegate;

- (id)init;
- (id)initWithZoomablePhotosViewModel:(id)a0;
- (BOOL)_pinchInteractionShouldBegin;
- (void).cxx_destruct;
- (BOOL)handleTapOnAssetReference:(id)a0;
- (BOOL)handlePinch:(id)a0;

@end

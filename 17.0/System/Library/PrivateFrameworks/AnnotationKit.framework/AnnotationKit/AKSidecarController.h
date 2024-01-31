@class AKController, NSObject, NSMutableSet, AKAnnotation, PKStroke, AKInkOverlayView;
@protocol OS_dispatch_source, AKSidecarControllerDelegate;

@interface AKSidecarController : NSObject {
    PKStroke *_currentStroke;
    AKInkOverlayView *_currentStrokeOverlay;
    NSObject<OS_dispatch_source> *_strokeTimer;
    BOOL _updatingModel;
    BOOL _ignoreKVOChanges;
    BOOL _handlingUndoRedo;
    BOOL _sendingCheckpoint;
    BOOL _needCheckpointSent;
    NSMutableSet *_coalescingAnnotationKeys;
    AKAnnotation *_coalescingAnnotationChange;
    NSObject<OS_dispatch_source> *_coalescingAnnotationSource;
}

@property (weak) AKController *controller;
@property (retain) NSMutableSet *observedPageModelControllers;
@property (retain) NSMutableSet *observedAnnotations;
@property (nonatomic) BOOL shouldObserveEdits;
@property (weak, nonatomic) id<AKSidecarControllerDelegate> delegate;

+ (BOOL)validateInitialMessage:(id)a0 applicationData:(id /* block */)a1;

- (void)dealloc;
- (void)done;
- (id)initWithController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_registerObservers;
- (void)_unregisterObservers;
- (void)_actuallySendAnnotationChange;
- (void)_annotation:(id)a0 addedToPageController:(unsigned long long)a1 selected:(BOOL)a2 atIndex:(unsigned long long)a3;
- (void)_annotation:(id)a0 modifiedInPageController:(unsigned long long)a1 properties:(id)a2;
- (void)_annotation:(id)a0 removedFromPageController:(unsigned long long)a1;
- (id)_annotationWithUUID:(id)a0 inPageModelController:(id)a1;
- (void)_annotationsWereAdded:(id)a0 onPageController:(id)a1 isUndoingRedoing:(BOOL)a2;
- (void)_annotationsWillBeRemoved:(id)a0 onPageController:(id)a1 isUndoingRedoing:(BOOL)a2;
- (void)_coalesceAnnotationChange:(id)a0 keyChange:(id)a1;
- (void)_handleAnnotationAdd:(id)a0;
- (void)_handleAnnotationModify:(id)a0;
- (void)_handleAnnotationRemove:(id)a0;
- (void)_handleInternalFailure;
- (void)_handleLiveStrokeUpdate;
- (void)_handleRedo:(id)a0;
- (void)_handleSelectionChanged:(id)a0;
- (void)_handleUndo:(id)a0;
- (void)_handleUndoCheckpoint:(id)a0;
- (unsigned long long)_indexOfAnnotationUUID:(id)a0 annotations:(id)a1;
- (id)_inkAnnotationFromPageModelController:(id)a0;
- (BOOL)_removeAnnotationUUID:(id)a0 fromPageModelController:(id)a1;
- (BOOL)_replaceAnnotation:(id)a0 inPageModelController:(id)a1;
- (void)_selectionChangedOnPageController:(id)a0;
- (void)_sendDictionary:(id)a0;
- (void)_startChangeUndoGroup;
- (void)_startObservingAnnotations:(id)a0;
- (void)_stopObservingAnnotations:(id)a0;
- (void)handleIncomingOPACKObject:(id)a0;
- (BOOL)handleLiveStrokeBegan:(id)a0 onInkOverlayView:(id)a1;
- (void)handleLiveStrokeComplete:(BOOL)a0;
- (void)observePageControllerRequestsDisableRegistration:(id)a0;
- (void)observePageControllerRequestsEnableRegistration:(id)a0;
- (void)startObservingPageModelController:(id)a0;
- (void)stopObservingPageModelController:(id)a0;

@end

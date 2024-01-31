@class UIView, AKLegacyDoodleController, AKAttributeController, AKActionController, AKModelController, AKUndoController, AKMainEventHandler, AKToolController, AKSignatureModelController;
@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController

@property (retain) id<AKControllerDelegateProtocol> testingDelegate;
@property (retain) AKModelController *testingModelController;
@property (retain) AKActionController *testingActionController;
@property (retain) AKToolController *testingToolController;
@property (retain) AKAttributeController *testingAttributeController;
@property (retain) AKUndoController *testingUndoController;
@property (retain) AKMainEventHandler *testingMainEventHandler;
@property (retain) UIView *testingToolbarView;
@property (retain) UIView *testingOverlayView;
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController;
@property (retain) AKSignatureModelController *testingSignatureModelController;

+ (void)renderAnnotation:(id)a0 inContext:(struct CGContext { } *)a1;

- (id)init;
- (id)delegate;
- (id)overlayView;
- (void).cxx_destruct;
- (id)toolbarView;
- (id)actionController;
- (id)toolController;
- (id)modelController;
- (void)performActionForSender:(id)a0;
- (BOOL)validateSender:(id)a0;
- (id)attributeController;
- (id)legacyDoodleController;
- (void)setOverlayShouldPixelate:(BOOL)a0;
- (void)updateOverlayViewAtIndex:(unsigned long long)a0;
- (id)mainEventHandler;
- (void)reloadVisibleToolbarItemIdentifiers;
- (id)signatureModelController;
- (id)undoController;

@end

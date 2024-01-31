@class PXSectionedSelectionManager, NSSet, NSString;

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel>

@property (readonly, nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) NSSet *disabledActionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)setFaceModeEnabled:(BOOL)a0;
- (id)mutableChangeObject;
- (void).cxx_destruct;
- (void)setSelectionManager:(id)a0;
- (void)setSelecting:(BOOL)a0;
- (void)setDisabledActionTypes:(id)a0;
- (void)setSupportsFaceMode:(BOOL)a0;
- (void)setSupportsSelection:(BOOL)a0;

@end

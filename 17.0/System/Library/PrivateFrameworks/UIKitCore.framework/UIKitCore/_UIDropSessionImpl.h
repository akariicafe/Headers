@class NSArray, NSString, NSProgress, _UIInternalDraggingSessionDestination;
@protocol UIDragSession;

@interface _UIDropSessionImpl : NSObject <UIDropSession, _UIDragDropSessionInternal, _UIDropSessionPrivate> {
    NSArray *_items;
}

@property (readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination;
@property (readonly, nonatomic, getter=_operationMask) unsigned long long operationMask;
@property (readonly, nonatomic) id<UIDragSession> localDragSession;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;
@property (readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
@property (readonly, nonatomic) long long _dataOwner;
@property (readonly, nonatomic) unsigned int _sessionIdentifier;
@property (readonly, nonatomic, getter=_drivenByPointer) BOOL drivenByPointer;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)_createItemsOfClass:(Class)a0 synchronouslyIfPossible:(BOOL)a1 completion:(id /* block */)a2;
- (id)_internalSession;
- (void)_itemsNeedUpdate:(id)a0;
- (struct CGPoint { double x0; double x1; })_previewCenterForVisibleItem:(id)a0 inView:(id)a1;
- (struct CGSize { double x0; double x1; })_previewSizeForVisibleItem:(id)a0;
- (BOOL)canLoadObjectsOfClass:(Class)a0;
- (BOOL)hasItemsConformingToTypeIdentifiers:(id)a0;
- (id)initWithSessionDestination:(id)a0;
- (id)loadObjectsOfClass:(Class)a0 completion:(id /* block */)a1;
- (void)requestVisibleItems:(id /* block */)a0;

@end

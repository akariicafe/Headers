@class NSSet, PXAssetReference, PXAssetCollectionActionPerformer, PXVelocityNumberFilter;
@protocol UIDragSession, UIDropSession, PXLocalDragSessionDelegate;

@interface PXLocalDragSession : NSObject {
    PXVelocityNumberFilter *_horizontalVelocity;
    PXVelocityNumberFilter *_verticalVelocity;
}

@property (readonly, nonatomic) long long identifier;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewLocation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } velocity;
@property (weak, nonatomic) id<PXLocalDragSessionDelegate> delegate;
@property (weak, nonatomic) id<UIDragSession> dragSession;
@property (nonatomic) BOOL isDragSessionActive;
@property (retain, nonatomic) NSSet *draggedAssetReferences;
@property (weak, nonatomic) id<UIDropSession> dropSession;
@property (nonatomic) BOOL isDropActiveInsideView;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (retain, nonatomic) PXAssetReference *hitAssetReference;
@property (retain, nonatomic) PXAssetCollectionActionPerformer *dropActionPerformer;
@property (nonatomic) unsigned long long dropOperation;
@property (retain, nonatomic) NSSet *excludedAssets;

- (id)init;
- (void).cxx_destruct;
- (void)_noteChanged:(SEL)a0;
- (id)horizontalVelocity;
- (void)updateWithDataSource:(id)a0;
- (id)verticalVelocity;

@end

@class PXContentPrivacyController, PXSelectionSnapshot, NSUndoManager, NSString;
@protocol PXFastEnumeration, PXDisplayCollection;

@interface PXSelectionContainer : NSObject

@property (readonly, nonatomic) long long selectionCount;
@property (readonly, nonatomic) BOOL hasExplicitSelection;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedObjects;
@property (readonly, nonatomic) BOOL containsReferencedFileAssets;
@property (readonly, nonatomic) BOOL containsRAWPlusJPEGAssets;
@property (readonly, nonatomic) BOOL containsRAWAssets;
@property (readonly, nonatomic) BOOL containsSpatialAssets;
@property (readonly, nonatomic) BOOL containsUnsavedContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsNonContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsAssetsWithNonEditableProperties;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedContainedAssets;
@property (readonly, nonatomic) BOOL allowImplicitSelectionForProjectsOrSharing;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedContainedAssetsForProjectsOrSharing;
@property (readonly, nonatomic) id<PXFastEnumeration> allDataSourceObjects;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, copy, nonatomic) NSString *title;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsObjectOfClass:(Class)a0 passingTest:(id /* block */)a1;
- (void)enumerateSelectedObjectsOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (id)firstSelectedObjectOfClass:(Class)a0;
- (id)initWithContent:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithContent:(id)a0 undoManager:(id)a1 context:(long long)a2;
- (id)initWithSelectionSnapshot:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithSelectionSnapshot:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3 privacyController:(id)a4;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1 context:(long long)a2;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1 context:(long long)a2 privacyController:(id)a3;
- (BOOL)isEqualToSelection:(id)a0;
- (id)selectedContainedAssets:(BOOL)a0;
- (id)selectedContainedAssets:(BOOL)a0 allowedClasses:(id)a1;
- (id)selectedObjects:(BOOL)a0;

@end

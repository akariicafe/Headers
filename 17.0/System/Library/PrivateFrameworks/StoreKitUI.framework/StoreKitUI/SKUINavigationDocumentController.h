@class UINavigationController, NSString, SKUIClientContext, NSMutableArray;
@protocol SKUINavigationDocumentDelegate;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {
    NSMutableArray *_pendingNavigationStackEnsureConsistencyRequests;
}

@property (retain, nonatomic) UINavigationController *moreNavigationController;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUINavigationDocumentDelegate> delegate;
@property (retain, nonatomic) UINavigationController *overrideNavigationController;
@property (readonly, copy, nonatomic) NSMutableArray *documentStackItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)initWithNavigationController:(id)a0;
- (void)removeDocument:(id)a0;
- (void).cxx_destruct;
- (id)documents;
- (void)popAllDocuments;
- (id)_activeNavigationController;
- (void)_applyDocumentReplacementForOldStackItem:(id)a0 atOldIndex:(long long)a1 withStackItem:(id)a2;
- (void)_ensureStackConsistencyForNavigationControllerOperation:(long long)a0 operationDidComplete:(BOOL)a1;
- (void)_handleStackDidChange;
- (void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)a0;
- (void)_unloadAllStackItems;
- (void)ensureStackConsistencyForNavigationControllerOperation:(long long)a0 operationDidComplete:(BOOL)a1;
- (void)insertDocument:(id)a0 beforeDocument:(id)a1 options:(id)a2;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)popToRootDocument;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;
- (void)setStackItems:(id)a0 animated:(BOOL)a1;

@end

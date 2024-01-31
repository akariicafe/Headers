@class PUActivityItemSourceOperation, NSString, NSArray, NSURL, NSError, NSObject, PUActivityItemSourceController;
@protocol OS_dispatch_queue, PUCMMActivityItemSourceDelegate;

@interface PUCMMActivityItemSource : PXObservable <PUActivityItemSourceOperationDelegate, PXChangeObserver, UIActivityItemsSource, UIActivityItemDeferredSource, UIActivityItemSource>

@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) PUActivityItemSourceOperation *preparationOperation;
@property (copy, nonatomic) NSURL *momentShareLink;
@property (copy, nonatomic) NSArray *individuallyPreparedItems;
@property (retain, nonatomic) NSError *preparationError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalIsolationQueue;
@property (readonly, weak, nonatomic) PUActivityItemSourceController *itemSourceController;
@property (weak, nonatomic) id<PUCMMActivityItemSourceDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewController:(id)a0 itemsForActivityType:(id)a1;
- (id)activityViewControllerOperation:(id)a0;
- (id)activityViewControllerPlaceholderItems:(id)a0;
- (void)activityItemSourceOperation:(id)a0 prepareItemForActivityType:(id)a1;
- (id)initWithActivityItemSourceController:(id)a0;
- (id)placeholderItemsForActivityViewController:(id)a0;
- (id)preparedItems;

@end

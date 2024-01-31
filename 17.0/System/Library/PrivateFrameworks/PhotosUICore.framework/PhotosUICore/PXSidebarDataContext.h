@class PXLibraryFilterState, NSOperationQueue, NSPredicate;
@protocol PXSidebarDataSectionEnablement;

@interface PXSidebarDataContext : NSObject

@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (readonly, nonatomic) id<PXSidebarDataSectionEnablement> enablementProvider;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLibraryFilterState:(id)a0 workQueue:(id)a1 enablementProvider:(id)a2 assetsFilterPredicate:(id)a3;

@end

@class NSNumber, MPModelObject, MPMediaLibraryView;

@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation

@property (nonatomic) struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery *__ptr_; struct __shared_weak_count *__cntrl_; } downloadableItemsQuery;
@property (copy, nonatomic) id /* block */ downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (copy, nonatomic) NSNumber *redownloadableItemCount;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

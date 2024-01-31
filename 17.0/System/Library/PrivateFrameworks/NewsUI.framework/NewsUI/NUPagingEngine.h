@class NSString, NUArticlePageFactory;

@interface NUPagingEngine : NSObject <NUPagingFactory>

@property (readonly, nonatomic) NUArticlePageFactory *articlePageFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createPagingForArticleIDs:(id)a0;
- (id)initWithArticlePageFactory:(id)a0;
- (id)paging:(id)a0 byAddingPage:(id)a1 afterPage:(id)a2;
- (id)paging:(id)a0 byRemovingPage:(id)a1;

@end

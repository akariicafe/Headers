@class SUUIClientContext, NSOperationQueue, SUUIResourceLoader, SUUILayoutCache, UIViewController;

@interface SUUINavigationBarContext : NSObject

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (nonatomic) double maximumNavigationBarWidth;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SUUIResourceLoader *resourceLoader;
@property (retain, nonatomic) SUUILayoutCache *textLayoutCache;

- (void).cxx_destruct;

@end

@class NSString;
@protocol NUArticleViewControllerFactory, NUArticleContentSizeManager, NUSettings, NUErrorMessageFactory;

@interface NUArticleHostViewControllerFactory : NSObject <NUArticleHostViewControllerFactory>

@property (readonly, nonatomic) id<NUArticleViewControllerFactory> articleViewControllerFactory;
@property (readonly, copy, nonatomic) id<NUSettings> settings;
@property (readonly, nonatomic) id<NUErrorMessageFactory> errorMessageFactory;
@property (readonly, nonatomic) id<NUArticleContentSizeManager> contentSizeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createArticleHostViewControllerForArticle:(id)a0;
- (id)initWithArticleViewControllerFactory:(id)a0 settings:(id)a1 errorMessageFactory:(id)a2 contentSizeManager:(id)a3;

@end

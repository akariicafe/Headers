@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) NSURL *articleURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)bodyStringForMailMessage;
- (id)initWithHeadline:(id)a0 URLModifier:(id)a1;

@end

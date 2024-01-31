@class NSString;

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) NSString *itemTitle;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithHeadline:(id)a0;

@end

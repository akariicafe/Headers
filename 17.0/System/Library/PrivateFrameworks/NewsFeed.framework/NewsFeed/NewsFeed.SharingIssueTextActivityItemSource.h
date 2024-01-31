@interface NewsFeed.SharingIssueTextActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ issue;
    void /* unknown type, empty encoding */ itemTitle;
    void /* unknown type, empty encoding */ itemCoverDate;
}

- (id)init;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end

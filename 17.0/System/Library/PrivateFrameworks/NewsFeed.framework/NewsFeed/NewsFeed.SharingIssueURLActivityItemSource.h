@interface NewsFeed.SharingIssueURLActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ issueURL;
    void /* unknown type, empty encoding */ issueTitle;
    void /* unknown type, empty encoding */ issueDescription;
    void /* unknown type, empty encoding */ issueCoverDate;
    void /* unknown type, empty encoding */ linkPresentationSource;
}

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

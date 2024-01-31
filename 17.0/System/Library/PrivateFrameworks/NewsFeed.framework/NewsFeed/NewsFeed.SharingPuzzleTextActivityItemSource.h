@interface NewsFeed.SharingPuzzleTextActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ puzzle;
    void /* unknown type, empty encoding */ shareData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_completeSolvedText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_solvedPuzzleTypeText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_solvedWithTimeText;
}

- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

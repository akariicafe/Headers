@class UIScrollView, SUUIDeveloperInfoView, SUUIDeveloperInfo;

@interface SUUIDeveloperInfoViewController : SUUIViewController {
    SUUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) SUUIDeveloperInfo *developerInfo;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithDeveloperInfo:(id)a0;

@end

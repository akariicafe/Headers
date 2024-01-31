@class NSString, TextLinkButton, UIView;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate> {
    TextLinkButton *linkButton;
    id previousNavDelegate;
}

@property (retain, nonatomic) UIView *linkContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)handleTextLinkTap;
- (void)setUpInitialTableFooter;
- (void)touchInCellAtIndexPath:(id)a0;

@end

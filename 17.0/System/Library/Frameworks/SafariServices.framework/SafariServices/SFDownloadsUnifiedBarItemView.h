@class SFDownloadsBarButtonItemView;

@interface SFDownloadsUnifiedBarItemView : SFUnifiedBarItemView {
    SFDownloadsBarButtonItemView *_buttonView;
}

@property (nonatomic) double progress;

- (id)init;
- (double)preferredWidth;
- (void).cxx_destruct;
- (void)pulse;

@end

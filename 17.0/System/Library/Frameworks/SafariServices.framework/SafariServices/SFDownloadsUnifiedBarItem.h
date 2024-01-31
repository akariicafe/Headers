@class SFDownloadsUnifiedBarItemView;

@interface SFDownloadsUnifiedBarItem : SFUnifiedBarItem {
    SFDownloadsUnifiedBarItemView *_view;
}

@property (nonatomic) double progress;

- (id)initWithAction:(id /* block */)a0;
- (id)view;
- (void).cxx_destruct;
- (void)pulse;

@end

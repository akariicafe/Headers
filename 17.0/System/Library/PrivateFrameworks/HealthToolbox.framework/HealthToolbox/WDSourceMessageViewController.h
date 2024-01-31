@class UILabel, HKSource;

@interface WDSourceMessageViewController : HKViewController {
    UILabel *_messageLabel;
    HKSource *_source;
}

@property (readonly, nonatomic) long long style;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_updateFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 source:(id)a1;

@end

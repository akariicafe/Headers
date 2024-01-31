@class NSString, NSURL, UIView, UILabel, _UIContentUnavailableView;

@interface DDParsecNoDataViewController : UIViewController {
    UIView *_container;
    UILabel *_errorLabel;
    _UIContentUnavailableView *_emptyNoContentView;
}

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *searchWebQuery;
@property (retain, nonatomic) NSURL *altURL;
@property (nonatomic) BOOL lookup;

- (void)updateStyle;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)manageDictionaries:(id)a0;
- (id)manageDictionariesURL;
- (void)searchWeb:(id)a0;

@end

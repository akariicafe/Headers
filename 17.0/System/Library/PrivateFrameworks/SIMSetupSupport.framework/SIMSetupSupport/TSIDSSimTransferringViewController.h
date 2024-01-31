@class UIStackView, NSString, UIActivityIndicatorView, UILabel;
@protocol TSSIMSetupFlowDelegate;

@interface TSIDSSimTransferringViewController : PRXCardContentViewController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain) UIActivityIndicatorView *indicatorView;
@property (retain) UIStackView *stackView;
@property (copy, nonatomic) UILabel *placeHolderLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;

@end

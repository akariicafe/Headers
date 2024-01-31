@class NSArray, NSDictionary, GKButton, NSString;
@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter>

@property (retain, nonatomic) GKButton *button;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) BOOL pinToBottom;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) double buttonBaselineOffset;
@property (nonatomic) int layoutStyle;
@property (weak, nonatomic) id<GKRemoteUIAuxiliaryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (void)buttonTapped:(id)a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tableViewDidUpdateContentInset:(id)a0;
- (void)adjustSizeToFillSuperview:(id)a0;
- (void)createButtonWithAttributes:(id)a0;
- (double)footerHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)objectModelDidChange:(id)a0;

@end

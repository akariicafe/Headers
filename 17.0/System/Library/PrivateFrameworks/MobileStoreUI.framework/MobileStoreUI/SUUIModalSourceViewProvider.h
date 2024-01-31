@class UIBarButtonItem, UIView;
@protocol SUUIModalSourceViewProviderDelegate;

@interface SUUIModalSourceViewProvider : NSObject {
    BOOL _hideOriginalSourceView;
}

@property (weak, nonatomic) id<SUUIModalSourceViewProviderDelegate> delegate;
@property (retain, nonatomic) UIView *originalSourceView;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *sourceButtonBarItem;
@property (retain, nonatomic) id userInfo;

- (void).cxx_destruct;
- (id)animationView;
- (void)hideOriginalSourceView;
- (void)showOriginalSourceView;

@end

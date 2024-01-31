@class NSString, NSMutableArray;

@interface PXToastPlacardView : UIView {
    BOOL _didLoad;
    NSMutableArray *_actions;
}

@property (copy, nonatomic) NSString *message;

- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)addActionWithTitle:(id)a0 action:(id /* block */)a1;

@end

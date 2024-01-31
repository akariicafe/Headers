@class PLPlatterActionButtonsView;

@interface PLActionButtonsPresentingView : UIView

@property (retain, nonatomic) PLPlatterActionButtonsView *actionButtonsView;
@property (nonatomic) unsigned long long interfaceEdge;
@property (nonatomic) unsigned long long layoutLocation;
@property (nonatomic) BOOL defaultActionTriggered;

- (void).cxx_destruct;
- (id)initWithActionButtonsView:(id)a0 interfaceEdge:(unsigned long long)a1 layoutLocation:(unsigned long long)a2;

@end

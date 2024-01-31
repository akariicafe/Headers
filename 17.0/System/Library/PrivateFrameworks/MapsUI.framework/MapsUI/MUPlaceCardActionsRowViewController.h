@class NSArray, MUPlaceCardActionsRowView;
@protocol MUPlaceCardActionsRowViewMenuProvider, MKPlaceActionManagerProtocol;

@interface MUPlaceCardActionsRowViewController : UIViewController

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionManager;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewMenuProvider> menuProvider;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, nonatomic) MUPlaceCardActionsRowView *actionsRowView;

- (id)initWithStyle:(unsigned long long)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)updateActionsRowView;

@end

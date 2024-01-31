@class UIInterfaceAction;

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying>

@property (readonly, nonatomic) UIInterfaceAction *action;
@property (readonly, nonatomic) BOOL isHighlighted;
@property (readonly, nonatomic) BOOL isPressed;
@property (readonly, nonatomic) BOOL isFocused;
@property (readonly, nonatomic) BOOL isPreferred;
@property (readonly, nonatomic) id actionViewStateContext;
@property (readonly, nonatomic) unsigned long long visualCornerPosition;

+ (id)_nullViewStateForActionType:(long long)a0;
+ (id)viewStateForActionRepresentationView:(id)a0 action:(id)a1;
+ (id)viewStateForActionRepresentationViewDescendantView:(id)a0 action:(id)a1;
+ (id)viewStateForAlertControllerActionView:(id)a0;
+ (id)viewStateRepresentingDefaultAction;
+ (id)viewStateRepresentingPreferredAction;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_collectStateForDefaultState;
- (void)_collectStateFromAction:(id)a0;
- (void)_collectStateFromActionRepresentationView:(id)a0;
- (void)_collectStateFromActionViewState:(id)a0;
- (BOOL)_stateEqualToActionViewState:(id)a0;
- (id)initWithPropertiesFromActionRepresentationView:(id)a0 groupView:(id)a1 action:(id)a2;

@end

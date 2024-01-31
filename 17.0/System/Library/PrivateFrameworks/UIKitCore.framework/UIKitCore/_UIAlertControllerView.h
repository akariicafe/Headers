@class NSString, UIAlertController, UIView, NSAttributedString, UIAlertControllerVisualStyle;

@interface _UIAlertControllerView : UIView

@property (copy, nonatomic, setter=_setTitle:) NSString *title;
@property (copy, nonatomic, setter=_setMessage:) NSString *message;
@property (copy, nonatomic, setter=_setAttributedTitle:) NSAttributedString *attributedTitle;
@property (copy, nonatomic, setter=_setAttributedMessage:) NSAttributedString *attributedMessage;
@property (copy, nonatomic, setter=_setAttributedDetailMessage:) NSAttributedString *attributedDetailMessage;
@property (weak) UIAlertController *alertController;
@property (readonly) UIView *_contentView;
@property (readonly) UIView *_dimmingView;
@property (retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
@property (nonatomic, getter=_actionsReversed, setter=_setActionsReversed:) BOOL actionsReversed;
@property (nonatomic) double effectAlpha;
@property BOOL shouldHaveBackdropView;
@property BOOL alignsToKeyboard;
@property BOOL hasDimmingView;
@property BOOL presentedAsPopover;

- (void).cxx_destruct;
- (void)_actionsChanged;
- (void)_actionLayoutDirectionChanged;
- (void)_addContentViewControllerToViewHierarchyIfNecessary;
- (id)_focusedAction;
- (void)_performBatchActionChangesWithBlock:(id /* block */)a0;
- (void)_propertiesChanged;
- (void)_removeContentViewControllerViewFromHierarchy;
- (void)_textFieldsChanged;
- (void)_updateLabelProperties;
- (void)_updatePreferredAction;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)a0;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)a0;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)a0;
- (void)deselectAllActions;

@end

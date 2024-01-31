@class UIContextMenuInteraction, UITapGestureRecognizer, NSString;

@interface _UISearchSuggestionControllerIOS : _UISearchSuggestionControllerIOSBase <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction;
@property (retain, nonatomic) UITapGestureRecognizer *suggestionsRecoveryGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_suggestionsRecoveryGestureRecognized;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)_dismissMenuWithoutAnimation;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_suggestionsMenu;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_hasVisibleMenu;
- (id)initWithSearchTextField:(id)a0;
- (void).cxx_destruct;
- (void)updateSuggestionGroups:(id)a0 userInitiated:(BOOL)a1;
- (void)_updateMenuWithSuggestionGroups:(id)a0;

@end

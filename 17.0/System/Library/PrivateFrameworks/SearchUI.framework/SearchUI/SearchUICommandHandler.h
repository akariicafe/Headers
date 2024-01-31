@class UIMenu, NSString, SearchUIRowModel, SearchUISectionModel, SFCommand, SFButtonItem, NSItemProvider, SearchUICommandEnvironment, UIViewController, SFPunchout;

@interface SearchUICommandHandler : NSObject <UIContextMenuInteractionDelegate>

@property (retain) SearchUIRowModel *rowModel;
@property (retain) SFButtonItem *buttonItem;
@property (retain) SFCommand *command;
@property (retain) SearchUICommandEnvironment *environment;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) id /* block */ actionProvider;
@property (readonly) SearchUISectionModel *sectionModel;
@property (readonly) BOOL prefersModalPresentation;
@property (readonly) BOOL supportsShare;
@property (readonly) BOOL supportsCopy;
@property (retain) NSItemProvider *itemProviderForCopy;
@property (readonly) BOOL prefersContextMenu;
@property (readonly) UIMenu *contextMenu;
@property (readonly) NSString *defaultTitle;
@property (readonly) NSString *defaultSymbolName;
@property (readonly) unsigned long long destination;
@property (readonly) SFPunchout *destinationPunchout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerForRowModel:(id)a0 environment:(id)a1;
+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;
+ (id)handlerForButton:(id)a0 rowModel:(id)a1 environment:(id)a2;
+ (id)handlerForButton:(id)a0 rowModel:(id)a1 sectionModel:(id)a2 environment:(id)a3;
+ (id)handlerForCommand:(id)a0 environment:(id)a1;
+ (id)handlerForCommand:(id)a0 rowModel:(id)a1 button:(id)a2 environment:(id)a3;
+ (id)handlerForCommand:(id)a0 rowModel:(id)a1 button:(id)a2 sectionModel:(id)a3 environment:(id)a4;
+ (BOOL)hasCustomViewControllerForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)hasValidHandlerForCommand:(id)a0 rowModel:(id)a1 environment:(id)a2;
+ (BOOL)hasValidHandlerForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)isDestructiveButtonItem:(id)a0;
+ (id)previewHandlerForRowModel:(id)a0 environment:(id)a1;
+ (id)revealHandlerForRowModel:(id)a0 environment:(id)a1;
+ (id)swipeActionsForRowModel:(id)a0 isLeading:(BOOL)a1 environment:(id)a2;
+ (id)tapCommandForRowModel:(id)a0 environment:(id)a1;

- (void)presentViewController:(id)a0 animated:(BOOL)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)showViewController:(id)a0;
- (id)additionalActionMenuItems;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (void)didPreview;
- (void)executeWithTriggerEvent:(unsigned long long)a0;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (id)initWithCommand:(id)a0 rowModel:(id)a1 button:(id)a2 environment:(id)a3;
- (id)initWithCommand:(id)a0 rowModel:(id)a1 button:(id)a2 sectionModel:(id)a3 environment:(id)a4;
- (id)menuForRowModel:(id)a0 buttonItem:(id)a1 commandEnvironment:(id)a2;
- (id)menuForRowModel:(id)a0 buttonItem:(id)a1 commandEnvironment:(id)a2 doesFallbackToCardSectionButtonItems:(BOOL)a3;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)prepareViewController:(id)a0 forTriggerEvent:(unsigned long long)a1;
- (id)presentingViewControllerForEnvironment:(id)a0;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)a0 animated:(BOOL)a1;
- (id)sendFeedbackWithTriggerEvent:(unsigned long long)a0 destination:(unsigned long long)a1 punchout:(id)a2;
- (BOOL)shouldDeselectAfterExecution;
- (void)wasPerformedWithTriggerEvent:(unsigned long long)a0;
- (void)wasPerformedWithTriggerEvent:(unsigned long long)a0 punchout:(id)a1;
- (void)wasPerformedWithTriggerEvent:(unsigned long long)a0 punchout:(id)a1 destination:(unsigned long long)a2;

@end

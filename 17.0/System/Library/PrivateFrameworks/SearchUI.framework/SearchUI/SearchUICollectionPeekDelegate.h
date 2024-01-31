@class SearchUICollectionViewController, SearchUICommandHandler, NSString;

@interface SearchUICollectionPeekDelegate : NSObject <UIContextMenuInteractionDelegate>

@property (weak, nonatomic) SearchUICollectionViewController *collectionViewController;
@property (retain, nonatomic) SearchUICommandHandler *commandHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)menuConfigurationForCommandHandler:(id)a0;

- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)initWithViewController:(id)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)generateTargetPreviewForInteraction:(id)a0 forItemWithIdentifier:(id)a1;

@end

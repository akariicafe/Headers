@interface WeatherMaps.ContextMenuInteractionDelegate : NSObject <UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ currentPreviewViewController;
    void /* unknown type, empty encoding */ location;
}

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)init;
- (void).cxx_destruct;

@end

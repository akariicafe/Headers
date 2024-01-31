@interface _UITextDataDetectedLinkInteractionHandler : _UITextLinkInteractionHandler

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (id)_dataDetectorsRevealControllerAction;
- (id)_defaultContextMenuConfiguration;
- (id)_defaultDataDetectorsPrimaryAction;
- (id)_defaultPrimaryActionForInteractableItem;
- (BOOL)_useDataDetectorsContextMenuConfiguration;
- (id)initWithItem:(id)a0 textContentView:(id)a1;

@end

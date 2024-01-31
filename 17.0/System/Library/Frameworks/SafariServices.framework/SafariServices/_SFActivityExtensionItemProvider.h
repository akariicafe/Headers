@class NSExtensionItem;

@interface _SFActivityExtensionItemProvider : _SFActivityItemProvider

@property (retain, nonatomic) NSExtensionItem *extensionItem;

- (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)_itemForActivityType:(id)a0;
- (id)initWithExtensionItem:(id)a0 URL:(id)a1 pageTitle:(id)a2 webView:(id)a3;

@end

@class WBSWebExtensionData;

@interface _SFWebExtensionSettingsAlertItem : _SFSettingsAlertItem

@property (readonly, nonatomic) WBSWebExtensionData *extension;

+ (id)buttonWithTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 extension:(id)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;

@end

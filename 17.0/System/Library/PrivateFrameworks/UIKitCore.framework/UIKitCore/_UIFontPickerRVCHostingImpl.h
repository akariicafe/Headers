@class NSString, _UIFontPickerRemoteViewController, NSExtension, UIFontPickerViewController;
@protocol _UIRemoteSheet, NSCopying;

@interface _UIFontPickerRVCHostingImpl : NSObject <_UIFontPickerViewControllerHost, _UIFontPickerViewHostingImpl>

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) _UIFontPickerRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIFontPickerViewController *delegateFontPickerViewController;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_initializeRemoteViewController;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)a0;
- (void)_setChildViewController:(id)a0;
- (void)setHideNavigationBar:(BOOL)a0;
- (void)setRemoteSelectedFontDescriptors:(id)a0 scrollToVisible:(BOOL)a1;
- (void)setupRemoteHosting;

@end

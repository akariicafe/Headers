@class NSString, _UISceneHostingController, UIFontPickerViewController;
@protocol _UIRemoteSheet;

@interface _UIFontPickerSceneHostingImpl : NSObject <_UISceneHostingControllerDelegate, _UIFontPickerViewControllerHost, _UIFontPickerViewHostingImpl> {
    _UISceneHostingController *_hostingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIFontPickerViewController *delegateFontPickerViewController;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;

- (void).cxx_destruct;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)a0;
- (void)clientIsReady;
- (void)setHideNavigationBar:(BOOL)a0;
- (void)setRemoteSelectedFontDescriptors:(id)a0 scrollToVisible:(BOOL)a1;
- (void)setupRemoteHosting;
- (void)setupSceneHosting;

@end

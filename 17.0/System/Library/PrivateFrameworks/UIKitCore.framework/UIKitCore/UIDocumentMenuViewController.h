@class _UIResilientRemoteViewContainerViewController, NSArray, NSString, NSURL, NSMutableArray, _UIDocumentPickerRemoteViewController;
@protocol UIDocumentMenuDelegate;

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate> {
    id<UIDocumentMenuDelegate> _weak_delegate;
}

@property (retain, nonatomic) NSMutableArray *auxiliaryOptions;
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, retain, nonatomic, getter=_remoteViewController) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (nonatomic) BOOL dismissDelegateCalled;
@property (nonatomic) unsigned long long documentPickerMode;
@property (copy, nonatomic) NSURL *uploadURL;
@property (copy, nonatomic) NSArray *allowedUTIs;
@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport;
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) BOOL isContentManaged;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) BOOL sourceIsManaged;
@property (weak, nonatomic) id<UIDocumentMenuDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)setModalPresentationStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInitWithCompletion:(id /* block */)a0;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)a0;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)a0;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)a0;
- (void)_stitchFileCreationAtURL:(id)a0;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)a0;
- (void)addOptionWithTitle:(id)a0 image:(id)a1 order:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)initWithDocumentTypes:(id)a0 inMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 inMode:(unsigned long long)a1;

@end

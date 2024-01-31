@interface PHLimitedLibraryPicker : NSObject

+ (void)presentLimitedLibraryPicker:(id)a0 waitForDismissal:(BOOL)a1;
+ (void)presentLimitedLibraryPickerFromViewController:(id)a0 options:(id)a1;
+ (void)presentLimitedLibraryPickerFromViewController:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (id)firstKeyWindow:(id)a0;
+ (id)topmostPresentedViewController:(id)a0;
+ (void)presentLimitedLibraryPicker:(id)a0 waitForDismissal:(BOOL)a1 viewController:(id)a2 photoLibrary:(id)a3 completionHandler:(id /* block */)a4;

@end

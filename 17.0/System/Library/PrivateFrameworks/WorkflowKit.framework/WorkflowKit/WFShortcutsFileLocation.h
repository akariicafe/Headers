@interface WFShortcutsFileLocation : WFFileProviderLocation

+ (BOOL)canRepresentURL:(id)a0 item:(id)a1 parentItems:(id)a2;
+ (id)locationAtRootDirectory;
+ (id)subpathFromURL:(id)a0 item:(id)a1;

- (id)resolveLocationWithError:(id *)a0;

@end

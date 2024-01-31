@class NSString, NSMapTable, WBSWebExtensionsController;

@interface WBSWebExtensionURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    NSMapTable *_fileLoadOperations;
    WBSWebExtensionsController *_extensionsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

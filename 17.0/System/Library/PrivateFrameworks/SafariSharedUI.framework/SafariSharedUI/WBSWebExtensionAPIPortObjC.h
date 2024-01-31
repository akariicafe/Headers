@class NSString, NSUUID, WKWebProcessPlugInBrowserContextController, NSDictionary, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIPortObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue> {
    NSUUID *_identifier;
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebExtensionAPIEventObjC *_onDisconnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    BOOL _isDisconnected;
    NSString *_name;
    NSDictionary *_sender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (struct OpaqueJSValue { } *)translateToJSValueWithJSContext:(struct OpaqueJSContext { } *)a0;

@end

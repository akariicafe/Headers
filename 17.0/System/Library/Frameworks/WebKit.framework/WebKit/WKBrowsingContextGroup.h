@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroup> { struct type { unsigned char __lx[64]; } data; } _pageGroup;
}

@property (readonly) struct OpaqueWKPageGroup { } *_pageGroupRef;
@property BOOL allowsJavaScript;
@property BOOL allowsPlugIns;
@property BOOL privateBrowsingEnabled;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)addUserScript:(id)a0 baseURL:(id)a1 includeMatchPatternStrings:(id)a2 excludeMatchPatternStrings:(id)a3 injectionTime:(int)a4 mainFrameOnly:(BOOL)a5;
- (void)addUserStyleSheet:(id)a0 baseURL:(id)a1 includeMatchPatternStrings:(id)a2 excludeMatchPatternStrings:(id)a3 mainFrameOnly:(BOOL)a4;
- (BOOL)allowsJavaScriptMarkup;
- (void)removeAllUserScripts;
- (void)removeAllUserStyleSheets;
- (void)setAllowsJavaScriptMarkup:(BOOL)a0;

@end

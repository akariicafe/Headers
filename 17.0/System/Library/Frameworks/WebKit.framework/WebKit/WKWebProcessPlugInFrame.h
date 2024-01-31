@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebFrame> { struct type { unsigned char __lx[120]; } data; } _frame;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly, nonatomic) BOOL containsAnyFormElements;
@property (readonly, nonatomic) BOOL isMainFrame;
@property (readonly, nonatomic) _WKFrameHandle *handle;
@property (readonly, nonatomic) NSArray *appleTouchIconURLs;
@property (readonly, nonatomic) NSArray *faviconURLs;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookUpContentFrameFromWindowOrFrameElement:(id)a0;
+ (id)lookUpFrameFromHandle:(id)a0;
+ (id)lookUpFrameFromJSContext:(id)a0;

- (void)dealloc;
- (struct __SecTrust { } *)_serverTrust;
- (id)jsCSSStyleDeclarationForCSSStyleDeclarationHandle:(id)a0 inWorld:(id)a1;
- (id)jsContextForServiceWorkerWorld:(id)a0;
- (id)jsRangeForRangeHandle:(id)a0 inWorld:(id)a1;
- (id)_securityOrigin;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)jsContextForWorld:(id)a0;
- (id)_browserContextController;
- (id)jsNodeForNodeHandle:(id)a0 inWorld:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;
- (id)_certificateChain;
- (id)_parentFrame;
- (id)_provisionalURL;
- (BOOL)_hasCustomContentProvider;

@end

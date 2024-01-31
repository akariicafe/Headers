@class NSString, WKWebProcessPlugInFrame;

@interface SFFormAutoFillFrame : NSObject <WBSFormAutoFillFrame>

@property (readonly, nonatomic) WKWebProcessPlugInFrame *plugInFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)a0;

- (id)committedURL;
- (BOOL)containsAnyFormElements;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateChildFramesUsingBlock:(id /* block */)a0;
- (id)_formMetadataController;
- (id)_pageContoller;
- (struct OpaqueFormAutoFillFrame { } *)frameRef;
- (id)initWithWebProcessPlugInFrame:(id)a0;
- (struct OpaqueJSContext { } *)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { } *)jsWrapperInMetadataControllerScriptWorldForNode:(id)a0;
- (id)pageMainFrame;

@end

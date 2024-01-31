@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> { struct type { unsigned char __lx[48]; } data; } _nodeHandle;
}

@property (readonly) void *_nodeHandle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementBounds;
@property (nonatomic) BOOL HTMLInputElementIsAutoFilled;
@property (nonatomic) BOOL HTMLInputElementIsAutoFilledAndViewable;
@property (nonatomic) BOOL HTMLInputElementIsAutoFilledAndObscured;
@property (readonly, nonatomic) BOOL HTMLInputElementIsUserEdited;
@property (readonly, nonatomic) BOOL HTMLTextAreaElementIsUserEdited;
@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property (readonly, nonatomic) BOOL isSelectElement;
@property (readonly, nonatomic) BOOL isSelectableTextNode;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeHandleWithJSValue:(id)a0 inContext:(id)a1;

- (void)dealloc;
- (id)renderedImageWithOptions:(unsigned int)a0 width:(id)a1;
- (id)htmlIFrameElementContentFrame;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (BOOL)isHTMLInputElementAutoFillButtonEnabled;
- (BOOL)isTextField;
- (id)renderedImageWithOptions:(unsigned int)a0;
- (void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(long long)a0;

@end

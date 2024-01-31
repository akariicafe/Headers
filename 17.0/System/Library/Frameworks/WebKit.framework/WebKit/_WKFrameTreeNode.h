@class NSArray, NSString, WKFrameInfo;

@interface _WKFrameTreeNode : WKFrameInfo <WKObject> {
    struct ObjectStorage<API::FrameTreeNode> { struct type { unsigned char __lx[344]; } data; } _node;
}

@property (readonly, copy, nonatomic) WKFrameInfo *info;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_handle;
- (void)dealloc;
- (BOOL)isMainFrame;
- (int)_processIdentifier;
- (id)webView;
- (id)request;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isLocalFrame;
- (id)_parentFrameHandle;
- (id)securityOrigin;

@end

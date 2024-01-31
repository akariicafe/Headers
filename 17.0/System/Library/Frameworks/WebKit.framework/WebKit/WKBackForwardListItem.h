@class NSURL, NSString;

@interface WKBackForwardListItem : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardListItem> { struct type { unsigned char __lx[376]; } data; } _item;
}

@property (readonly) void *_item;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

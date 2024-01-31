@class NSString;

@interface WKNSArray : NSArray <WKObject> {
    struct ObjectStorage<API::Array> { struct type { unsigned char __lx[32]; } data; } _array;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

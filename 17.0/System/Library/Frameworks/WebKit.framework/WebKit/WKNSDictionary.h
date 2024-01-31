@class NSString;

@interface WKNSDictionary : NSDictionary <WKObject> {
    struct ObjectStorage<API::Dictionary> { struct type { unsigned char __lx[24]; } data; } _dictionary;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSDictionary, NSArray, NSString;

@interface _WKCustomHeaderFields : NSObject <WKObject> {
    struct ObjectStorage<API::CustomHeaderFields> { struct type { unsigned char __lx[48]; } data; } _fields;
}

@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSArray *thirdPartyDomains;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end

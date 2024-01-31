@class NSString;

@interface _WKGeolocationPosition : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebGeolocationPosition> { struct type { unsigned char __lx[128]; } data; } _geolocationPosition;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)positionWithLocation:(id)a0;

- (void)dealloc;

@end

@class NSString, NUViewport;

@interface NUViewportRegionPolicy : NSObject <NURegionPolicy> {
    NUViewport *_viewport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)regionForGeometry:(id)a0;
- (id)initWithViewport:(id)a0;

@end

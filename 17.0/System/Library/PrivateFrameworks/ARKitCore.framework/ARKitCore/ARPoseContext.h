@class NSString;

@interface ARPoseContext : NSObject <ARResultDataContext>

@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) id /* block */ cameraTransformCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageData;
- (void).cxx_destruct;
- (id)resultDataOfClass:(Class)a0;

@end

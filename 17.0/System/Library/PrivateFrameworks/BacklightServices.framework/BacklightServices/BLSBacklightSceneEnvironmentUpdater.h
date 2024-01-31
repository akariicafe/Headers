@class NSString;
@protocol BLSBacklightSceneEnvironment_Private;

@interface BLSBacklightSceneEnvironmentUpdater : NSObject <BLSBacklightSceneEnvironmentUpdating> {
    id<BLSBacklightSceneEnvironment_Private> _environment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performDesiredFidelityRequest:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)performFrameSpecifiersRequest:(id)a0;
- (void).cxx_destruct;
- (void)updatedEnvironmentWithDelta:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; })a0 backlightSceneUpdate:(id)a1;

@end

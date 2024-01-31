@class NSSet, NSString;

@interface HMDCameraClipAddModelsOperation : HMDCameraClipOperation <HMBLocalZoneMirrorOutputObserver>

@property (readonly, copy) NSSet *modelsToAdd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (void)localZone:(id)a0 willPerformMirrorOutputForModel:(id)a1;
- (void)updateMirrorOutputModel:(id)a0;

@end

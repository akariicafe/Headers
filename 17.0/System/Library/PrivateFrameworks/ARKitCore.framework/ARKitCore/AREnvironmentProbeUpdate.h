@class NSArray, AREnvironmentProbeManager, NSString;

@interface AREnvironmentProbeUpdate : NSObject <ARResultData> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _probeAnchorsLock;
}

@property (weak, nonatomic) AREnvironmentProbeManager *manager;
@property (readonly, nonatomic) NSArray *addedProbeAnchors;
@property (readonly, nonatomic) NSArray *updatedProbeAnchors;
@property (readonly, nonatomic) NSArray *removedProbeAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

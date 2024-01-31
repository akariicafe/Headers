@class NSArray, NSSet;

@interface GDVUGallery : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) BOOL ready;
@property (nonatomic, readonly) long long faceprintRevision;
@property (nonatomic, readonly) long long torsoprintRevision;
@property (nonatomic, readonly) long long animalprintRevision;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSSet *unassignedObservations;

- (id)init;
- (void).cxx_destruct;
- (id)clustersFor:(id)a0;
- (id)keyObservationsFor:(long long)a0 limit:(long long)a1 offset:(long long)a2;
- (BOOL)mutateAndReturnError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)resetAndReturnError:(id *)a0;
- (BOOL)updateAndReturnError:(id *)a0 progressHandler:(id /* block */)a1;
- (void)updateInferredDeviceOwner;
- (void)updateSocialGroupsWithSocialGroups:(id)a0;

@end

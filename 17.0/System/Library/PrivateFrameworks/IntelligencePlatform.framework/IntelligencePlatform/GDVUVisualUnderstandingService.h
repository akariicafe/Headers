@class GDVUGallery;

@interface GDVUVisualUnderstandingService : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) GDVUGallery *gallery;

- (id)init;
- (void).cxx_destruct;
- (BOOL)keyObservationFor:(id)a0 output:(long long *)a1 error:(id *)a2;
- (id)changesSince:(id)a0 error:(id *)a1 body:(id /* block */)a2;
- (id)entitiesFor:(id)a0 error:(id *)a1 body:(id /* block */)a2;
- (id)inferredDeviceOwner;
- (id)inferredDeviceOwnerWithIgnoreMeGroundTruth:(BOOL)a0;
- (id)initWithClient:(id)a0 version:(long long)a1 url:(id)a2 error:(id *)a3;
- (id)recognizeIn:(id)a0 context:(id)a1 error:(id *)a2;
- (id)recognizeIn:(id)a0 contextMoment:(long long)a1 error:(id *)a2;
- (BOOL)similarEntitiesTo:(id)a0 error:(id *)a1 body:(id /* block */)a2;
- (BOOL)similarityWithBetween:(id)a0 and:(id)a1 output:(double *)a2 error:(id *)a3;

@end

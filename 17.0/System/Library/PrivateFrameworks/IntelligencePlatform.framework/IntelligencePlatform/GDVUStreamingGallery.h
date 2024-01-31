@interface GDVUStreamingGallery : NSObject {
    void /* unknown type, empty encoding */ inner;
}

- (id)init;
- (id)initWithClient:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)addWithObservations:(id)a0 observationIdentifiers:(id)a1 trackIdentifiers:(id)a2 context:(id)a3 error:(id *)a4;
- (BOOL)resetAndReturnError:(id *)a0;
- (id)updateWithMaxKeyFacesPerCluster:(long long)a0 error:(id *)a1;
- (id)updateWithMaxKeyFacesPerCluster:(long long)a0 sortBy:(id)a1 error:(id *)a2;

@end

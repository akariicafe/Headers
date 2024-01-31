@class PGGraph, PHPhotoLibrary, PGPublicEventDisambiguator;

@interface PGPhotosChallengePublicEventAlgorithmWrapper : NSObject {
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
    PGPublicEventDisambiguator *_publicEventDisambiguator;
}

- (void).cxx_destruct;
- (id)initWithEvaluationContext:(id)a0;
- (unsigned short)predictedQuestionStateForAssetUUID:(id)a0 publicEventMUID:(unsigned long long)a1;

@end

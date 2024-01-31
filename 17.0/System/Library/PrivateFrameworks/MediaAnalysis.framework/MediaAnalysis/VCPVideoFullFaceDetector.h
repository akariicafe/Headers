@class GDVUStreamingGallery, NSArray, VCPFrameAnalysisStats, VCPCNNPoseEstimator, NSMutableDictionary, NSMutableArray, VCPCNNSmileDetector;

@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector {
    int _latestTrackID;
    VCPCNNSmileDetector *_smileDetector;
    VCPCNNPoseEstimator *_poseEstimator;
    NSArray *_existingFaceprints;
    VCPFrameAnalysisStats *_frameStats;
    float _latestFrameArea;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastTracking;
    NSMutableDictionary *_faceTrackers;
    NSMutableDictionary *_keyFaces;
    NSMutableArray *_allTorsos;
    NSMutableArray *_reservedIDs;
    NSMutableDictionary *_facePrints;
    NSMutableDictionary *_torsoPrints;
    NSMutableArray *_allFaces;
    NSMutableDictionary *_faceRanges;
    NSMutableArray *_frameFaceResults;
    GDVUStreamingGallery *_gallery;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)clusterFaces;
- (BOOL)compareFace:(id)a0 withFace:(id)a1;
- (int)detectFaces:(struct __CVBuffer { } *)a0 faces:(id)a1 torsos:(id)a2;
- (int)detectTrackFacesInFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 faces:(id)a2 torsos:(id)a3;
- (id)faceRanges;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)frameFaceResults;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withExistingFaceprints:(id)a1 frameStats:(id)a2;
- (BOOL)locationChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 landscape:(BOOL)a2;
- (float)minProcessTimeIntervalInSecs;
- (void)removeSmallestKeyFace;
- (int)updateWithExistingFaces;

@end

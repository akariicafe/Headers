@class FCRFaceDetector, NSMutableDictionary, NSMutableArray;

@interface CIBurstImageFaceAnalysisContext : NSObject {
    NSMutableDictionary *curConfig;
    NSMutableDictionary *faceIdMapping;
    NSMutableDictionary *renameMapping;
    int faceIdCounter;
    NSMutableArray *faceInfoArray;
    int numFramesNoFaces;
    FCRFaceDetector *faceDetector;
    NSMutableArray *faceTimestampArray;
    double latestImageTimestamp;
    int lastFaceIndex;
}

@property double timeFaceDetectionDone;
@property double timeBlinkDetectionDone;
@property BOOL forceFaceDetectionEnable;
@property double latestFaceTimestamp;
@property int version;

- (void)dealloc;
- (id)initWithVersion:(id)a0;
- (void)calcFaceScores:(id)a0;
- (void)addFaceToArray:(id)a0;
- (void)addFacesToImageStat:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)adjustFaceIdsForImageStat:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFaceCoreROI:(id)a0 imageStat:(id)a1 needFaceCore:(BOOL *)a2;
- (void)calculateFaceFocusInImage:(id)a0 imageStat:(id)a1;
- (void)dumpFaceInfoArray;
- (void)extractFacesFromMetadata:(id)a0;
- (int)findFacesInImage:(id)a0 imageStat:(id)a1;
- (id)findOverlappingFaceStat:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageStat:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })padRoiRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paddingX:(float)a1 paddingY:(float)a2;
- (void)setupFaceDetector;

@end

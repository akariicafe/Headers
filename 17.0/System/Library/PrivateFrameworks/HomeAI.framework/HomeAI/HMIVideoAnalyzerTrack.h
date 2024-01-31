@class NSMutableSet, NSMutableArray, HMIVideoAnalyzerBlob;

@interface HMIVideoAnalyzerTrack : HMFObject

@property (readonly) NSMutableArray *blobs;
@property (readonly) NSMutableArray *analysisTimeStamps;
@property unsigned long long stationaryBlobIndex;
@property (readonly) unsigned long long trackIndex;
@property (readonly) HMIVideoAnalyzerBlob *lastBlob;
@property (readonly) NSMutableSet *eventClasses;

- (id)shortDescription;
- (void).cxx_destruct;
- (void)appendBlob:(id)a0;
- (id)blobAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)createPackageEventAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithBlob:(id)a0 trackIndex:(unsigned long long)a1;
- (BOOL)isClassified;
- (BOOL)isExpiredAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isLostAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isStationaryAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)similarityToBlob:(id)a0;
- (unsigned long long)stationaryIndexToBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

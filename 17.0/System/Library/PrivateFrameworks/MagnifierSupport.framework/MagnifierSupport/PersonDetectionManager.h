@class ARCamera, NSArray;

@interface PersonDetectionManager : NSObject

@property (retain) ARCamera *arCamera;
@property (nonatomic) BOOL isCenterDetectionEnabled;
@property (readonly, nonatomic) struct CGSize { double width; double height; } centerDetectionSize;
@property (readonly, nonatomic) float labellingTolerance;
@property (readonly, nonatomic) float significantAreaThresholdMM;
@property (readonly, nonatomic) float closeDetectionFactor;
@property (readonly, nonatomic) NSArray *detectedPersonArray;
@property (readonly, nonatomic) struct __CVBuffer { } *labelBuffer;
@property (readonly, nonatomic) unsigned short maxLabel;

- (void)dealloc;
- (void).cxx_destruct;
- (float)areaFactorForDepth:(float)a0 camera:(id)a1 orientation:(long long)a2;
- (id)computeLabelIn:(id)a0 x:(unsigned long long)a1 y:(unsigned long long)a2 depth:(float)a3;
- (void)computePersonDetectionFromFrame:(id)a0 interfaceOrientation:(long long)a1;
- (unsigned short)findLabel:(unsigned short)a0 inLabels:(id)a1;
- (id)getDetectedPersonsFromBuffer:(struct __CVBuffer { } *)a0 camera:(id)a1 interfaceOrientation:(long long)a2;
- (id)initWithCenterDetectionSize:(struct CGSize { double x0; double x1; })a0 labellingTolerance:(float)a1 significantAreaThresholdMM:(float)a2 closeDetectionFactor:(float)a3;
- (BOOL)isInCenterRectFromRow:(unsigned long long)a0 column:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (BOOL)isIntersectingWithCenter:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })project3dPoint:(SEL)a0 viewSize:(struct CGSize { double x0; double x1; })a1 interfaceOrientation:(long long)a2;
- (unsigned short)unionLabel:(unsigned short)a0 with:(unsigned short)a1 inLabels:(id)a2;
- (void /* unknown type, empty encoding */)unprojectPoint:(struct CGPoint { double x0; double x1; })a0 atDepth:(float)a1 viewSize:(struct CGSize { double x0; double x1; })a2 interfaceOrientation:(long long)a3;
- (void)updateLabel:(id)a0 x:(unsigned long long)a1 y:(unsigned long long)a2 depth:(float)a3;

@end

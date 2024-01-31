@class NSString, PKStrokeProviderSliceIdentifier, PKStroke, CHEncodedStrokeIdentifier;
@protocol CHStrokeIdentifier;

@interface PKStrokeProviderSlice : NSObject <CHStroke>

@property (readonly, nonatomic) CHEncodedStrokeIdentifier *encodedStrokeIdentifier;
@property (readonly, nonatomic) PKStrokeProviderSliceIdentifier *identifier;
@property (readonly, nonatomic) PKStroke *stroke;
@property (readonly, nonatomic) id<CHStrokeIdentifier> strokeIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) unsigned long long strokeAttributes;
@property (readonly, nonatomic) double startTimestamp;
@property (readonly, nonatomic) double endTimestamp;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (long long)compareTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_lastPointIndex;
- (long long)_firstPointIndex;
- (struct CGPoint { double x0; double x1; })_interpolatedPointForSplineSegment:(long long)a0 t:(double)a1;
- (double)_interpolatedTimeForSplineSegment:(long long)a0 t:(double)a1;
- (double)_lengthOfSplineSegment:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_splineControlPoint:(long long)a0;
- (double)_strokeLength;
- (void)enumeratePointsWithDistanceStep:(double)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePointsWithTimestep:(double)a0 usingBlock:(id /* block */)a1;
- (id)initWithStroke:(id)a0 tStart:(double)a1 tEnd:(double)a2;

@end

@class NSString, TSDStroke;
@protocol TSTStrokeLayerStrokeAndRange;

@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>

@property (retain, nonatomic) TSDStroke *stroke;
@property (nonatomic) struct TSTSimpleRange { long long origin; unsigned long long length; } range;
@property (nonatomic) int order;
@property (retain, nonatomic) id<TSTStrokeLayerStrokeAndRange> majorStrokeLayerToken;
@property (retain, nonatomic) id<TSTStrokeLayerStrokeAndRange> minorStrokeLayerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithStroke:(id)a0 range:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2 majorStrokeLayerToken:(id)a3 minorStrokeLayerToken:(id)a4;

- (void).cxx_destruct;
- (id)initWithStroke:(id)a0 range:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2 majorStrokeLayerToken:(id)a3 minorStrokeLayerToken:(id)a4;

@end

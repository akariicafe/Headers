@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject <NSCopying> {
    void *_heatMap;
    NSDictionary *_CHStrokeID2HeatmapItemID;
    NSDictionary *_heatmapItemID2CHStrokeID;
}

@property (readonly, nonatomic) long long highDensityStrokeCount;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)strokeIDsWithinRectangleRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)clutterFilterByAddingStrokes:(id)a0 removingStrokeIdentifiers:(id)a1 affectedStrokeIdentifiers:(id *)a2;
- (BOOL)isHighDensityStroke:(id)a0;

@end

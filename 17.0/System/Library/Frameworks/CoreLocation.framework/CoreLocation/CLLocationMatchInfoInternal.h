@class NSData;

@interface CLLocationMatchInfoInternal : NSObject <NSCopying> {
    long long fMatchQuality;
    struct CLLocationCoordinate2D { double latitude; double longitude; } fMatchCoordinate;
    double fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    BOOL fMatchShifted;
    NSData *fMatchDataArray;
}

- (void)dealloc;
- (id)initWithMatchQuality:(long long)a0 matchCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 matchCourse:(double)a2 matchFormOfWay:(int)a3 matchRoadClass:(int)a4 matchShifted:(BOOL)a5 matchDataArray:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

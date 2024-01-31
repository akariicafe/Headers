@interface SFMagicHeadMarkerView : UIView {
    double _positionDegree;
    double _containerRadius;
}

@property (readonly) double currentOffset;

- (id)initWithPositionDegree:(double)a0 containerRadius:(double)a1;
- (void)updateMarkerWithDegreeOffset:(double)a0;

@end

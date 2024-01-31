@class WKBokehMotionManager;

@interface WKBokehMotionFilter : NSObject {
    WKBokehMotionManager *_motionManager;
    double _filterCoefficient;
    struct CGPoint { double x; double y; } _filteredPosition;
    struct CGSize { double width; double height; } _displacement;
}

- (id)init;
- (void).cxx_destruct;

@end

@class PADPose;

@interface PADFace : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (retain, nonatomic) PADPose *facePose;

- (void).cxx_destruct;

@end

@class NSMutableArray;

@interface VNScreenGazeState : NSObject {
    int _temporalSmoothingFrameCount;
    unsigned int _currentFrame;
    NSMutableArray *_faceObjectStates;
}

- (void).cxx_destruct;

@end

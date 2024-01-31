@class UIColor;

@interface PKInterpolateColorAnimation : NSObject {
    double _sourceRGBA[4];
    double _destRGBA[4];
    double _startTime;
    double _duration;
    UIColor *_endColorFallback;
}

- (void).cxx_destruct;

@end

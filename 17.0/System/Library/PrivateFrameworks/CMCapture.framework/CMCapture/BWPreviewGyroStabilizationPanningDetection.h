@interface BWPreviewGyroStabilizationPanningDetection : NSObject {
    void /* unknown type, empty encoding */ _translationVector[10];
    int _inputIndex;
    int _ringCount;
    float _panningSpeedThreshold;
}

@property (readonly, nonatomic) BOOL isPanning;

- (void)reset;
- (float)_computePanningStatistics;
- (void)_updateWithTranslation:(SEL)a0;
- (BOOL)detectPanningUsingTranslation:(SEL)a0 maxAvgTranslationOut:(float *)a1;
- (id)initWithPanningThreshold:(float)a0;

@end

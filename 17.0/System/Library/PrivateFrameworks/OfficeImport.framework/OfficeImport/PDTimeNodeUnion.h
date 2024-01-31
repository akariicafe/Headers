@class PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDCmdBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDAnimateRotateBehavior, PDAnimateEffectBehavior, PDAnimateTimeBehavior;

@interface PDTimeNodeUnion : NSObject {
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}

- (id)init;
- (id)description;
- (id)video;
- (void).cxx_destruct;
- (void)setVideo:(id)a0;
- (id)behavior;
- (void)setBehavior:(id)a0;
- (id)audio;
- (void)setAudio:(id)a0;
- (id)sequential;
- (void)setSequential:(id)a0;
- (id)parallel;
- (void)setParallel:(id)a0;
- (void)setCmdBehavior:(id)a0;
- (id)cmdBehavior;
- (id)colorBehavior;
- (id)commonBehavior;
- (id)effectBehavior;
- (id)motionBehavior;
- (id)rotateBehavior;
- (id)scaleBehavior;
- (void)setColorBehavior:(id)a0;
- (void)setEffectBehavior:(id)a0;
- (void)setMotionBehavior:(id)a0;
- (void)setRotateBehavior:(id)a0;
- (void)setScaleBehavior:(id)a0;
- (void)setTimeBehavior:(id)a0;
- (id)timeBehavior;

@end

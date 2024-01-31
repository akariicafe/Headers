@interface VCViewpointCorrection : NSObject {
    struct CVAViewpointCorrection { } *_viewpointCorrectionRef;
}

- (id)init;
- (void)dealloc;

@end

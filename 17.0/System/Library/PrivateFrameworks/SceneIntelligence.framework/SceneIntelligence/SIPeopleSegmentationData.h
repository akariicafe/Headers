@interface SIPeopleSegmentationData : SIOutputData

@property struct __CVBuffer { } *segmentation;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })_resolutionByConfig:(id)a0;
- (id)initWithOutputSemanticBuffer:(struct __CVBuffer { } *)a0;

@end

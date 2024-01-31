@class NSString;

@interface BWInferenceSortedFusionTrackCropDescriptor : NSObject <BWInferenceCropDescriptor> {
    char _identifier;
    int _orderedFusionTrackIndex;
}

@property (readonly, nonatomic) char identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)applicableToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forMediaKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { int x0; int x1; })maxCropForDimensions:(struct { int x0; int x1; })a0;
- (id)initWithIdentifier:(char)a0 orderedFusionTrackIndex:(int)a1;

@end

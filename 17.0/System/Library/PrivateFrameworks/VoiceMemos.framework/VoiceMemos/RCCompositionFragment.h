@class NSURL, NSString;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>

@property (retain, nonatomic) NSURL *AVOutputURL;
@property (nonatomic) double contentDuration;
@property (nonatomic) struct { double beginTime; double endTime; } timeRangeInContentToUse;
@property (nonatomic) struct { double beginTime; double endTime; } timeRangeInComposition;
@property (readonly, nonatomic) NSURL *waveformURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deleteFromFilesystem;
- (id)dictionaryPListRepresentation;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)a0;
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(struct { double x0; double x1; })a0;
- (id)initWithAVOutputURL:(id)a0 contentDuration:(double)a1 timeRangeInContentToUse:(struct { double x0; double x1; })a2 timeRangeInComposition:(struct { double x0; double x1; })a3;
- (id)initWithDictionaryPListRepresentation:(id)a0;
- (void)moveAssetsToFragment:(id)a0;

@end

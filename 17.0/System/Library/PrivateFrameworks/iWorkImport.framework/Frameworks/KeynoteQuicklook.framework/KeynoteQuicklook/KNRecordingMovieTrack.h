@class NSArray;

@interface KNRecordingMovieTrack : TSPObject {
    BOOL _isMovieSegmentDataTrimmedToDuration;
}

@property (readonly, nonatomic) NSArray *movieSegments;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 movieSegments:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)a0 trimDuration:(out double *)a1;
- (id)movieTrackByReplacingAfterTime:(double)a0 withMovieTrack:(id)a1 trimmedMovieSegment:(id)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end

@class NSString, NSArray, NSURL, NSDate;

@interface TVPChapterCollection : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) long long type;
@property (retain, nonatomic) id backingData;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL shouldStartPlaybackFromStartDate;
@property (nonatomic) BOOL shouldDisplayChapterMarkers;
@property (nonatomic) BOOL shouldShowDescriptionOnChapterSkip;
@property (nonatomic) double refreshInterval;
@property (copy, nonatomic) NSURL *refreshURL;

- (id)init;
- (void).cxx_destruct;
- (id)chapterForTime:(double)a0;
- (id)chapterForDate:(id)a0;
- (id)nearestChapterForDate:(id)a0;
- (id)nearestChapterForTime:(double)a0;

@end

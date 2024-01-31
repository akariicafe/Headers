@class NSArray;

@interface PXTimelineSchedulerOptions : NSObject

@property (nonatomic) double timelineEntryDuration;
@property (nonatomic) double bestContentEntryDuration;
@property (retain, nonatomic) NSArray *bestContentStartTimeHours;
@property (nonatomic) unsigned long long timelineForSize;
@property (nonatomic) unsigned long long timelineIndex;
@property (nonatomic) unsigned long long numberOfTimelines;

+ (id)_sortTimelineSizesFromSet:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateOptionsForTimelineSize:(unsigned long long)a0 withTimelineSizes:(id)a1;

@end

@class NSArray;

@interface VideosExtrasVideoTimeline : NSObject {
    NSArray *_timelineElements;
}

@property (readonly, nonatomic) NSArray *events;

- (id)description;
- (void).cxx_destruct;
- (id)eventForTime:(double)a0;
- (id)initWithTimelineElements:(id)a0;

@end

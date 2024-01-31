@class JEMediaActivity, NSString, JEMediaTimeTracker, NSObject, NSMutableArray;
@protocol JEMediaPlaylist;

@interface JEMediaActivityTracker : NSObject

@property (retain, nonatomic) NSObject *pipeline;
@property (retain, nonatomic) id<JEMediaPlaylist> playlist;
@property (retain, nonatomic) JEMediaActivity *playActivity;
@property (retain, nonatomic) JEMediaActivity *seekActivity;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSMutableArray *eventData;
@property (retain, nonatomic) JEMediaTimeTracker *timeTracker;
@property (nonatomic) BOOL shouldGenerateTransitions;

+ (id /* block */)playlistItemComparator;

- (void).cxx_destruct;
- (void)resetEventData:(id)a0;
- (id)combineEventData:(id)a0 withPlaylistDataForItem:(id)a1;
- (void)generatePlaylistTransitionsIfNecessary:(unsigned long long)a0;
- (id)initWithPipeline:(id)a0 playlist:(id)a1 eventData:(id)a2 topic:(id)a3;
- (void)playStartedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playStartedWithPlaybackRate:(float)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)playStoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playTransitionedAtOverallPosition:(unsigned long long)a0 eventData:(id)a1;
- (void)seekStartedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)seekStoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (id)startActivity:(long long)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4 transitioningEventData:(id)a5;
- (void)stopActivity:(long long)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4 transitioningEventData:(id)a5;
- (void)synchronizeAtOverallPosition:(unsigned long long)a0;
- (void)synchronizePlaybackRate:(float)a0 overallPosition:(unsigned long long)a1;
- (void)updateEventData:(id)a0;

@end

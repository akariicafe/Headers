@class TLTimelineEntryNode, TLTimelineWindow, NSTimer, NSDate;
@protocol TLTimelineEntry, TLTimelineDelegate;

@interface TLTimeline : NSObject <NSSecureCoding, NSCopying> {
    TLTimelineEntryNode *_leftmostNode;
    TLTimelineEntryNode *_rightmostNode;
    TLTimelineWindow *_nowWindow;
    NSTimer *_timer;
    BOOL _delegateRespondsToTimerFired;
    BOOL _updatesNowNodeOnSignificantTimeChange;
    int _notifyToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL paused;
@property (weak, nonatomic) id<TLTimelineDelegate> delegate;
@property (readonly, nonatomic) NSDate *dateOfLastEntryInTimeline;
@property (nonatomic) BOOL updatesNowNodeOnSignificantTimeChange;
@property (readonly, nonatomic) id<TLTimelineEntry> lastEntry;
@property (readonly, nonatomic) unsigned long long nodeCapacity;
@property (readonly, nonatomic) id<TLTimelineEntry> nowEntry;
@property (readonly, nonatomic) NSDate *endOfVisibilityForNowEntry;

+ (id)TLTimelineSegmentFromSortedEntries:(id)a0 withLowerBound:(id)a1 upperBound:(id)a2;

- (void)_timerFired;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateTimer;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntry:(id)a0;
- (void)resetWithEntry:(id)a0;
- (id)_rightmostDate;
- (void)extendTimelineFromDate:(id)a0 withEntries:(id)a1;
- (id)_sortedEntries:(id)a0;
- (id)_nowEntry;
- (id)_nowNode;
- (void)_recycleAllNodes;
- (void)_setupWithEntry:(id)a0;
- (void)_trimTimeline;
- (void)_updateNowWindow;
- (id)entriesWithinDateInterval:(id)a0;
- (void)extendRightFromDate:(id)a0 withEntries:(id)a1;
- (id)initWithWindow:(id)a0 paused:(BOOL)a1;
- (id)nowWindow;

@end

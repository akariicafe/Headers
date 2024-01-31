@class NSArray, NSMutableArray, NSMapTable;

@interface HFCameraPlaybackEngineEventCache : NSObject

@property (retain, nonatomic) NSMutableArray *allCameraEvents;
@property (readonly, nonatomic) NSMapTable *firstOfTheDayClips;
@property (readonly, nonatomic) NSMapTable *firstOfTheDayEvents;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (readonly, nonatomic) NSArray *cameraClips;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)firstOfTheDayClipForDate:(id)a0;
- (BOOL)isFirstEventOfTheDay:(id)a0;
- (void)_setupDebugHandler;
- (id)hfCameraRecordingEventsFromArray:(id)a0;
- (BOOL)isEventDisplayable:(id)a0;
- (void)loadEvents:(id)a0;
- (void)prepareAndAddClip:(id)a0 toSortedEvents:(id)a1;
- (void)removeEventUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetFirstOfTheDayContainers;
- (void)resetWithEvents:(id)a0;
- (id)timelineEligibleEventsFromEvents:(id)a0;
- (void)updateContainerForCameraRecordingEvent:(id)a0;
- (void)updateFirstOfTheDayContainersWithEvent:(id)a0;
- (void)updateWithEvents:(id)a0 completion:(id /* block */)a1;

@end

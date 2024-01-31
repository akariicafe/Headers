@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 queue:(id)a1;
- (BOOL)hasObservers;
- (void)considerMyNewVisit:(id)a0;
- (id)dispatchQueue;
- (void)dealloc;
- (void)awaitQueue;
- (void)stopLocationUpdatesForDelegate:(id)a0;
- (void)onStopImplementation;
- (void)onStartImplementation;
- (id).cxx_construct;
- (void)considerMyNewLocation:(id)a0;
- (id)restartLocationUpdatesForDelegate:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countLocationObservers;
- (id)startLocationUpdatesForDelegate:(id)a0;
- (void)considerMyAllowanceAsLimited:(BOOL)a0;

@end

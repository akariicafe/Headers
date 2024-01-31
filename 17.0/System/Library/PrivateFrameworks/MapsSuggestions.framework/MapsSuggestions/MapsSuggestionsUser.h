@class NSString, MapsSuggestionsRoutine, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsMeCardReader;

@interface MapsSuggestionsUser : NSObject <MapsSuggestionsObject> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsMeCardReader> _meCardReader;
    MapsSuggestionsRoutine *_routine;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (char)hasVisitedMapItem:(id)a0 handler:(id /* block */)a1;
- (id)initWithMeCardReader:(id)a0 routine:(id)a1;
- (char)meCardForProminentPlacesAroundCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 maxDistance:(double)a1 maxAge:(double)a2 minVisits:(long long)a3 handler:(id /* block */)a4;
- (char)mostRecentVisitWithinDistance:(double)a0 ofMapItem:(id)a1 handler:(id /* block */)a2;

@end

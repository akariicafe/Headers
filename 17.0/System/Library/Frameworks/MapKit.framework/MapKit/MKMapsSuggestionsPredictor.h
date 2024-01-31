@class NSString, NSXPCConnection, NSObject;
@protocol MKMapsSuggestionsSignalPackCacheInterface, OS_dispatch_queue, OS_dispatch_source;

@interface MKMapsSuggestionsPredictor : NSObject <MKMapsSuggestionsPredictor> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

@property (retain, nonatomic) id<MKMapsSuggestionsSignalPackCacheInterface> signalPackCacheInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPredictor;

- (id)init;
- (BOOL)transportModeForDestinationEntryData:(id)a0 originCoordinateData:(id)a1 handler:(id /* block */)a2;
- (void)dealloc;
- (void)_scheduleCloseConnection;
- (void)_closeConnection;
- (BOOL)_openConnectionIfNecessary;
- (void)_unscheduleCloseConnection;
- (void).cxx_destruct;
- (void)_initCloseTimerIfNecessary;
- (id)NSDataToMKMapsSuggestionsTransportModes:(id)a0 error:(id *)a1;
- (BOOL)transportModeForDestinationMapItemData:(id)a0 originCoordinateData:(id)a1 handler:(id /* block */)a2;

@end

@class ATXHeuristicDevice;

@interface ATXEventTravelTimeDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void)travelTimeInfoForEventID:(id)a0 location:(id)a1 expectedArrivalDate:(id)a2 transportType:(id)a3 localOnlyAfterFirstUpdate:(BOOL)a4 callback:(id /* block */)a5;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end

@class ATXHeuristicDevice;

@interface ATXAlarmsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)alarmsFromDate:(id)a0 toDate:(id)a1 completionHandler:(id /* block */)a2;

@end

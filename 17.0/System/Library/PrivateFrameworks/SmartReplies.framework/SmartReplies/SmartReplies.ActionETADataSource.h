@interface SmartReplies.ActionETADataSource : NSObject <GEONavigationListenerDelegate> {
    void /* unknown type, empty encoding */ geoListener;
    void /* unknown type, empty encoding */ geoQueue;
    void /* unknown type, empty encoding */ latestTransportType;
    void /* unknown type, empty encoding */ latestTimeAndPositionFromDestination;
}

- (id)init;
- (void)navigationListener:(id)a0 didUpdatePositionFromDestination:(struct { double x0; double x1; })a1;
- (void)navigationListener:(id)a0 didChangeNavigationState:(unsigned long long)a1 transportType:(int)a2;
- (void).cxx_destruct;

@end

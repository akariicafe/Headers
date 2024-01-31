@interface _GEOOfflineServiceMapViewMetaData : NSObject {
    double priority;
    unsigned long long state;
    double _lastUpdated;
    struct { struct { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } _viewPort;
}

- (id)init;

@end

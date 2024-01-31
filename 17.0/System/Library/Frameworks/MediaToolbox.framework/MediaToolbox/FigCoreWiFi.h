@class CWFInterface, NSDictionary, NSData;

@interface FigCoreWiFi : NSObject {
    struct OpaqueFigReentrantMutex { } *_wifiStatsLock;
    CWFInterface *cwfInterface;
    NSDictionary *wifiStats;
    NSData *ssid;
}

- (id)initWithError:(id *)a0;
- (void)dealloc;
- (id)copyAllWiFiStats;

@end

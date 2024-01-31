@interface VUIMetricsLocalRecorder : NSObject {
    void /* unknown type, empty encoding */ storageManager;
    void /* unknown type, empty encoding */ currentSession;
}

- (id)init;
- (id)initWithStorageManager:(id)a0;
- (void).cxx_destruct;
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)a0;

@end

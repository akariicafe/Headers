@interface PXTTRRadarObject : NSObject <PXTapToRadarDiagnosticProvider> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ radarDescription;
    void /* unknown type, empty encoding */ classification;
    void /* unknown type, empty encoding */ component;
    void /* unknown type, empty encoding */ screenshotURLs;
    void /* unknown type, empty encoding */ keywords;
}

- (id)init;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void).cxx_destruct;

@end

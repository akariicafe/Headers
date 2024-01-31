@interface HKAudiogramLineSeriesPresentationStyle : NSObject {
    void /* unknown type, empty encoding */ seriesEar;
    void /* unknown type, empty encoding */ selectedEar;
    void /* unknown type, empty encoding */ displayState;
    void /* unknown type, empty encoding */ disableConnectionLines;
}

- (id)init;
- (id)initWithSeriesEar:(long long)a0 selectedEar:(long long)a1 disableConnectionLines:(BOOL)a2;
- (id)lineSeriesPresentationStyle;

@end

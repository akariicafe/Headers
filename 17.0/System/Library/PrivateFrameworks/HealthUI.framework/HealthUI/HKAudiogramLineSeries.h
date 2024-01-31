@interface HKAudiogramLineSeries : HKLineSeries {
    void /* unknown type, empty encoding */ seriesEar;
}

+ (id)audiogramLineSeriesForSeriesEar:(long long)a0 selectedEar:(long long)a1 disableConnectionLines:(BOOL)a2;
+ (BOOL)shouldInstallSeriesWithSeriesEar:(long long)a0 selectedEar:(long long)a1;

- (id)init;
- (BOOL)supportsMultiTouchSelection;

@end

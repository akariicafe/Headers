@interface MedicationsHealthAppPlugin.SharedMedicationsChartDataSouce : HKGraphSeriesDataSource {
    void /* unknown type, empty encoding */ medication;
    void /* unknown type, empty encoding */ dataBlockMap;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 context:(id)a1;

@end

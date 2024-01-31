@interface HealthRecordsUI.SingleValueAnnotationViewDataSource : HealthRecordsUI.MedicalRecordAnnotationViewDataSource {
    void /* unknown type, empty encoding */ valueRangeGroup;
    void /* unknown type, empty encoding */ valueLabel;
    void /* unknown type, empty encoding */ referenceRangeView;
    void /* unknown type, empty encoding */ constraints;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateUsing:(id)a0;
- (void)updateUsing:(id)a0 valueRange:(id)a1 dateRange:(id)a2 timeScope:(long long)a3;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;

@end

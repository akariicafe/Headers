@protocol _TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_;

@interface HealthRecordsUI.BloodPressureChartConfiguration : NSObject <HealthRecordsUI.MedicalRecordChartConfiguration>

@property (nonatomic, readonly) Class chartControllerClass;
@property (nonatomic, readonly) BOOL shouldShowOutOfRangeOverlay;
@property (nonatomic, readonly) id<_TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_> dataTransformer;

- (id)init;

@end

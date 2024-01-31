@class HDDemoDataAlcoholSampleGenerator, HDDemoDataMobilitySampleGenerator, HDDemoDataSymptomsSampleGenerator, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataOtherAndAdditionalSampleGenerator, HDDemoDataGeneratorConfiguration, NSCalendar, NSArray, HDDemoDataBodySampleGenerator, NSMutableDictionary, HDDemoDataAudioExposureSampleGenerator, HDDemoDataPerson, NSObject, HDDemoDataMindfulnessSampleGenerator, HDDemoDataActivitySampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataHeartSampleGenerator, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataAudiogramSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataVitalsSampleGenerator, HDProfile, HDDemoDataFoodSampleGenerator, HDDemoDataGeneratorState;
@protocol OS_dispatch_queue;

@interface HDDemoDataGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_demoDataGenerators;
    NSArray *_dataGeneratorsFromPlugins;
    NSArray *_dataGeneratorClassesFromPlugins;
    NSMutableDictionary *_appProvenances;
    NSCalendar *_gregorianCalendar;
    long long _numHKSamples;
    BOOL _isGeneratingDemoData;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDemoDataPerson *demoPerson;
@property (retain, nonatomic) HDDemoDataGeneratorConfiguration *configuration;
@property (retain, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator;
@property (retain, nonatomic) HDDemoDataAlcoholSampleGenerator *alcoholSampleGenerator;
@property (retain, nonatomic) HDDemoDataAudioExposureSampleGenerator *audioExposureSampleGenerator;
@property (retain, nonatomic) HDDemoDataAudiogramSampleGenerator *audiogramSampleGenerator;
@property (retain, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator;
@property (retain, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator;
@property (retain, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator;
@property (retain, nonatomic) HDDemoDataHeartSampleGenerator *heartSampleGenerator;
@property (retain, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator;
@property (retain, nonatomic) HDDemoDataMobilitySampleGenerator *mobilitySampleGenerator;
@property (retain, nonatomic) HDDemoDataOtherAndAdditionalSampleGenerator *otherAndAdditionalSampleGenerator;
@property (retain, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator;
@property (retain, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator;
@property (retain, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator;
@property (retain, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator;
@property (retain, nonatomic) HDDemoDataSymptomsSampleGenerator *symptomsSampleGenerator;
@property (retain, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator;
@property (readonly, nonatomic) HDDemoDataGeneratorState *generatorState;

- (id)init;
- (id)gregorianCalendar;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)firstSampleDate;
- (id)currentDateFromCurrentTime:(double)a0;
- (long long)firstSampleDayOfYear;
- (void)generateThroughEndDate:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 configuration:(id)a1 queue:(id)a2;
- (BOOL)isDemoDataTimeInWeekend:(double)a0 calendar:(id)a1;

@end

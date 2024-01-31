@interface MentalHealthDaemon.MentalHealthAssessmentsDemoDataGenerator : NSObject <HDDemoDataObjectGenerator> {
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ generatorState;
    void /* unknown type, empty encoding */ nextSampleTime;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setDemoDataGenerationContextWithProfile:(id)a0 generatorState:(id)a1;

@end

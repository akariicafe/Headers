@class NSNumber, NSMutableArray;

@interface MAIDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_DayStreamProcessor, std::default_delete<Nightingale::ngt_DayStreamProcessor>> { struct __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::default_delete<Nightingale::ngt_DayStreamProcessor>> { struct ngt_DayStreamProcessor *__value_; } __ptr_; } _dayStreamProcessor;
    struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } _julianDayOfLastInput;
    struct unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> { struct __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::default_delete<HealthAlgorithms::PhaseCondenser>> { struct PhaseCondenser *__value_; } __ptr_; } _phaseCondenser;
}

@property (retain, nonatomic) NSMutableArray *watchIdentifiers;
@property (retain, nonatomic) NSNumber *userAgeInYears;

- (id)initWithConfig:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendDay:(id)a0;
- (void)beginPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (void)endPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (struct MAIDayStreamProcessorOutput { id x0; id x1; id x2; })analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)a0;
- (unsigned char)watchNumericIdentifierFromString:(id)a0;

@end

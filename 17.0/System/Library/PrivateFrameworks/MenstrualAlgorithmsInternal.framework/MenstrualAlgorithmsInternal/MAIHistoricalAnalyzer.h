@class NSMutableArray;

@interface MAIHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { struct __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { struct ngt_HistoricalAnalyzer *__value_; } __ptr_; } _historicalAnalyzer;
    struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } _julianDayOfLastInput;
    struct unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> { struct __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::default_delete<HealthAlgorithms::PhaseCondenser>> { struct PhaseCondenser *__value_; } __ptr_; } _phaseCondenser;
}

@property (retain, nonatomic) NSMutableArray *watchIdentifiers;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct MAIHistoricalAnalyzerOutput { id x0; id x1; })analyze;
- (void)appendDay:(id)a0;
- (void)beginPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (void)endPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (id)phaseStringFromNumber:(id)a0;
- (unsigned char)watchNumericIdentifierFromString:(id)a0;

@end

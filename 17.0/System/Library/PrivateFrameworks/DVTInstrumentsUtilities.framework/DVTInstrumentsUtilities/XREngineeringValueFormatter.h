@class NSTimeZone, NSDateFormatter, NSNumberFormatter, NSDate, NSMeasurementFormatter;

@interface XREngineeringValueFormatter : NSFormatter {
    NSNumberFormatter *_countFormatter;
    NSNumberFormatter *_intIDFormatter;
    NSNumberFormatter *_fpsFormatter;
    NSNumberFormatter *_fixedDecimalFormatter;
    NSNumberFormatter *_countersFormulaResultFormatter;
    NSDateFormatter *_timeOfDayFormatter;
    NSMeasurementFormatter *_measurementFormatter;
}

@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) BOOL displaysFullBacktrace;
@property (nonatomic, getter=isHighestResolutionTimeEnabled) BOOL highestResolutionTimeEnabled;
@property (retain, nonatomic) NSDate *offsetForRelativeTimes;
@property (readonly, nonatomic) BOOL withinNarrative;
@property (nonatomic) BOOL useSimplifiedPlaceholder;
@property (retain, nonatomic) NSTimeZone *timeOfDayTimeZone;

+ (id)networkAddressStringFromSockaddr:(const void *)a0 length:(unsigned long long)a1 resolveHostName:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)getTitleAndSubtitleForSwiftTaskEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForCoreEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForProcessEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForSwiftActorEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForSwiftTaskPriorityEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForThreadEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (BOOL)getTitleAndSubtitleForURLSessionEngineeringValue:(id)a0 title:(id *)a1 subtitle:(id *)a2;
- (id)stringForBacktraceEngineeringValue:(id)a0;
- (id)stringForCallSiteEngineeringValue:(id)a0;
- (id)stringForCoreProfileBacktraceEngineeringValue:(id)a0;
- (id)stringForEngineeringValue:(id)a0;
- (id)stringForInstrumentTypeEngineeringValue:(id)a0;
- (id)stringForLibraryAddressEngineeringValue:(id)a0;
- (id)stringForSocketAddrEngineeringValue:(id)a0;
- (id)stringForSwiftTaskNameUsingTextSymbolEngineeringValue:(id)a0 andTextSymbolBacktrace:(id)a1;
- (id)stringForTextSymbolEngineeringValue:(id)a0 shouldIncludeLibrary:(BOOL)a1;
- (id)stringForUserIDEngineeringValue:(id)a0;
- (id)typeStringForEngineeringValue:(id)a0;

@end

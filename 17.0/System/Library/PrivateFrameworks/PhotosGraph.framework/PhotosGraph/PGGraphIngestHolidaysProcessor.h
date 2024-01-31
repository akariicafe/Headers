@class NSString, PGGraphIngestHolidayProcessorHelper, PGGraphBuilder;

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
    PGGraphIngestHolidayProcessorHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)deleteHolidayEdgesWithMomentNodes:(id)a0 inGraph:(id)a1;
- (id)initWithGraphBuilder:(id)a0;
- (void)insertHolidaysBetweenLocalDate:(id)a0 andLocalDate:(id)a1 graph:(id)a2 locale:(id)a3 loggingConnection:(id)a4 progressBlock:(id /* block */)a5;
- (void)insertHolidaysWithMomentNodes:(id)a0 graph:(id)a1 locale:(id)a2 loggingConnection:(id)a3 progressBlock:(id /* block */)a4;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldCreateHolidayEdgeForEventRule:(id)a0 momentNode:(id)a1 momentLocalDate:(id)a2 withGraph:(id)a3 loggingConnection:(id)a4 localeCountryCode:(id)a5 keyboardLanguageCodes:(id)a6;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end

@class NSString, NSArray;

@interface CADDiagnosticsCalDAVLogCollector : NSObject <CADDiagnosticLogCollector> {
    NSArray *_orderedInputURLs;
    NSArray *_orderedOutputURLs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)collect:(id)a0;
- (void)determineExpectedOutputFiles:(id)a0;
- (id)findAllLogFiles:(id)a0;
- (id)parseFilenameDates:(id)a0 context:(id)a1;
- (id)sortAndTrimLogFiles:(id)a0 context:(id)a1;

@end

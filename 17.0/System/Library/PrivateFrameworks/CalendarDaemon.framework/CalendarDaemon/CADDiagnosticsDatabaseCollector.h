@class NSString, NSArray;

@interface CADDiagnosticsDatabaseCollector : NSObject <CADDiagnosticLogCollector> {
    NSArray *_dbInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)collect:(id)a0;
- (void)determineExpectedOutputFiles:(id)a0;

@end

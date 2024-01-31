@class NSArray, NSString, NSMutableArray;

@interface TIDPReporterMock : NSObject <TIDPReportingDelegate> {
    NSMutableArray *_recordsWritten;
}

@property (readonly, nonatomic) NSArray *recordsWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (BOOL)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (BOOL)record:(id)a0;
- (void).cxx_destruct;
- (BOOL)recordTokenFrequency:(id)a0 withLocale:(id)a1 withTokenType:(id)a2;

@end

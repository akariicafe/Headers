@interface MXCorePayloadConstructor : NSObject

+ (id)buildDiagnosticPayloadForClient:(id)a0 fromClientDiagnosticsDictionary:(id)a1 withDateString:(id)a2;
+ (id)buildDummyDiagnosticPayloadForClient:(id)a0 withDateString:(id)a1;
+ (id)buildDummyPayloadForClient:(id)a0 withDateString:(id)a1;
+ (id)buildPayloadForClient:(id)a0 fromClientMetricsDictionary:(id)a1;
+ (id)constructPayloadWithServiceString:(id)a0 withSourceData:(id)a1 withDateString:(id)a2 forClient:(id)a3;
+ (id)updatePayload:(id)a0 withServiceString:(id)a1 withSourceData:(id)a2 withDateString:(id)a3 forClient:(id)a4;

@end

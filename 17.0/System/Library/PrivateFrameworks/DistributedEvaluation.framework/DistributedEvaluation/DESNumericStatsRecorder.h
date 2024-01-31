@interface DESNumericStatsRecorder : NSObject <DESFedStatsRecorderProtocol>

+ (id)constructErrorWith:(id)a0;

- (BOOL)donateData:(id)a0 toKey:(id)a1 withMetadata:(id)a2 recorder:(id)a3;
- (BOOL)record:(id)a0 data:(id)a1 dataTypeContent:(id)a2 metadata:(id)a3 errorOut:(id *)a4;
- (BOOL)record:(id)a0 data:(id)a1 encodingSchema:(id)a2 metadata:(id)a3 errorOut:(id *)a4;

@end

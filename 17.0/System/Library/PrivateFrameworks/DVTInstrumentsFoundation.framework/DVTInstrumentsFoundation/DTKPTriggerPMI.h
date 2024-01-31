@class NSString;

@interface DTKPTriggerPMI : DTKPTrigger

@property (readonly, retain, nonatomic) NSString *pmiEventNameOrAlias;
@property (readonly, nonatomic) unsigned long long thresholdCount;

- (int)stop:(id *)a0;
- (int)start:(id *)a0;
- (void).cxx_destruct;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long *)a0;
- (int)setPMIEventNamed:(id)a0 threshold:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)triggerKind;

@end

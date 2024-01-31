@class DTKPKDebugCodeSet;

@interface DTKPTriggerKDebug : DTKPTrigger

@property (nonatomic) int filterMode;
@property (readonly, retain, nonatomic) DTKPKDebugCodeSet *codeSet;

- (int)stop:(id *)a0;
- (int)start:(id *)a0;
- (void).cxx_destruct;
- (void)addCodeSet:(id)a0;
- (void)clearCodeSet;
- (void)enableClass:(unsigned char)a0;
- (void)enableClass:(unsigned char)a0 subclass:(unsigned char)a1;
- (void)enableClass:(unsigned char)a0 subclass:(unsigned char)a1 code:(unsigned int)a2;
- (void)enableDebugID:(unsigned int)a0;
- (id)initWithCounterAllocatorProvider:(id)a0;
- (unsigned long long)triggerKind;

@end

@class NSArray;

@interface _ANEInputBuffersReady : NSObject

@property (readonly, nonatomic) unsigned int procedureIndex;
@property (readonly, nonatomic) NSArray *inputBufferInfoIndex;
@property (readonly, nonatomic) NSArray *inputFreeValue;
@property (readonly, nonatomic) unsigned long long executionDelay;

+ (id)new;
+ (id)inputBuffersWithProcedureIndex:(unsigned int)a0 inputBufferInfoIndex:(id)a1 inputFreeValue:(id)a2 executionDelay:(unsigned long long)a3;

- (BOOL)validate;
- (id)init;
- (void).cxx_destruct;
- (id)initInputsProcedureIndex:(unsigned int)a0 inputBufferInfoIndex:(id)a1 inputFreeValue:(id)a2 executionDelay:(unsigned long long)a3;

@end

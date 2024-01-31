@interface _ANEOutputSetEnqueue : NSObject

@property (readonly, nonatomic) unsigned int procedureIndex;
@property (readonly, nonatomic) unsigned int setIndex;
@property (readonly, nonatomic) unsigned long long signalValue;
@property (readonly, nonatomic) BOOL signalNotRequired;
@property (readonly, nonatomic) BOOL isOpenLoop;

+ (id)new;
+ (id)outputSetWithProcedureIndex:(unsigned int)a0 setIndex:(unsigned int)a1 signalValue:(unsigned long long)a2 signalNotRequired:(BOOL)a3 isOpenLoop:(BOOL)a4;

- (id)init;
- (id)initOutputSetWithProcedureIndex:(unsigned int)a0 setIndex:(unsigned int)a1 signalValue:(unsigned long long)a2 signalNotRequired:(BOOL)a3 isOpenLoop:(BOOL)a4;

@end

@class NSArray, NSString;

@interface DTGPUCounter : NSObject

@property (retain, nonatomic) NSArray *rawCounters;
@property (retain, nonatomic) NSString *counterDescription;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned long long maxValue;
@property (retain, nonatomic) NSString *functionName;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) unsigned int multiplier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL requiresWeightAccumulation;

- (void).cxx_destruct;
- (id)infoArray;
- (id)initWithName:(id)a0 maxValue:(unsigned long long)a1;

@end

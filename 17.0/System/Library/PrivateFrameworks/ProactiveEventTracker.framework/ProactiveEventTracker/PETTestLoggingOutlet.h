@class NSString, NSMutableArray, NSMutableDictionary;

@interface PETTestLoggingOutlet : NSObject <PETLoggingOutlet>

@property (readonly, nonatomic) NSString *lastLoggedKey;
@property (readonly, nonatomic) unsigned long long lastLoggedScalarValue;
@property (readonly, nonatomic) double lastLoggedDistributionValue;
@property (readonly, nonatomic) NSString *previousLoggedKey;
@property (readonly, nonatomic) unsigned long long previousLoggedScalarValue;
@property (readonly, nonatomic) double previousLoggedDistributionValue;
@property (readonly, nonatomic) NSMutableArray *allLoggedKeys;
@property (readonly, nonatomic) NSMutableArray *allLoggedValues;
@property (readonly, nonatomic) NSMutableDictionary *keyValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getValueForKey:(id)a0;
- (void)logUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (id)init;
- (void)logDoubleValue:(double)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void)reset;
- (void)setUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void).cxx_destruct;
- (void)logErrorForEvent:(id)a0 featureId:(id)a1 reason:(id)a2;

@end

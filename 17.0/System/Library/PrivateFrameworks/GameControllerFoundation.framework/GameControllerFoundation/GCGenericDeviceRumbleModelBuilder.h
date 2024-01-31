@class NSArray;

@interface GCGenericDeviceRumbleModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) float dispatchFrequency;
@property (copy, nonatomic) NSArray *actuators;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSArray *outputs;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)initializeWithModel:(id)a0;

@end

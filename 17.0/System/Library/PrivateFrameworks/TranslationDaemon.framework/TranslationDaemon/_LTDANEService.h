@interface _LTDANEService : NSObject

@property (class, retain) Class dataProvider;

+ (void)initialize;
+ (long long)capability;
+ (long long)capabilityForSubType:(id)a0 error:(id *)a1;

@end

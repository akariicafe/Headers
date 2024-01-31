@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject

@property (readonly, nonatomic) long long updatedFlagsMask;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) BOOL hasFlagUpdates;
@property (readonly, nonatomic) NSArray *arrayDescription;

+ (id)descriptionForFlags:(long long)a0;
+ (id)_arrayDescriptionForFlags:(long long)a0 remainingFlags:(long long *)a1;
+ (id)flagsDescriptionMapping;

- (id)init;
- (id)initWithFlags:(long long)a0;
- (id)redactedDescription;
- (void)setValue:(BOOL)a0 forFlag:(long long)a1;
- (void)updateFlags:(id)a0;
- (void)updateFlags:(long long)a0 withFlagsValue:(long long)a1;
- (id)description;
- (BOOL)valueForFlag:(long long)a0;
- (long long)updatedFlagsFromFlags:(long long)a0;

@end

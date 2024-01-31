@class NSNumber;

@interface HMPresenceEventActivation : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)activationGranularityWithCoder:(id)a0;
+ (id)activationGranularityWithValue:(unsigned long long)a0;
+ (id)activationGranularityWithDict:(id)a0;
+ (id)activationGranularityWithMessage:(id)a0;
+ (id)activationGranularityWithNumber:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumber:(id)a0;
- (void)addToCoder:(id)a0;
- (void)addToPayload:(id)a0;

@end

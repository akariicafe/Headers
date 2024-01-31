@class NSNumber, NSSet;

@interface DNDSMutableApplicationConfigurationRecord : DNDSApplicationConfigurationRecord

@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (copy, nonatomic) NSSet *allowedThreads;
@property (copy, nonatomic) NSSet *deniedThreads;

- (void)setMinimumBreakthroughUrgency:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAllowedThreads:(id)a0;
- (void)setDeniedThreads:(id)a0;

@end

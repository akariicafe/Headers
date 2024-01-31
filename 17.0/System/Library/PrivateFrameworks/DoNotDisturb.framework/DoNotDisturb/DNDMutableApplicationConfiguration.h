@class NSMutableSet;

@interface DNDMutableApplicationConfiguration : DNDApplicationConfiguration

@property (nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (copy, nonatomic) NSMutableSet *allowedThreads;
@property (copy, nonatomic) NSMutableSet *deniedThreads;

- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0;
- (void)setAllowedThreads:(id)a0;
- (void)setDeniedThreads:(id)a0;

@end

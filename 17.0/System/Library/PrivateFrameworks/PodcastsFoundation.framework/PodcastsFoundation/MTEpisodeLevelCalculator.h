@interface MTEpisodeLevelCalculator : NSObject <MTEpisodeLevelCalculatorProtocol>

@property (class, nonatomic, readonly) long long uncalculatedLevel;

- (id)init;
- (void)unsafeUpdateEpisodeLevelsWithShowUUID:(id)a0 on:(id)a1;
- (void)unsafeUpdateEpisodeShowTypeSpecificLevelsWithShowUUID:(id)a0 on:(id)a1;

@end

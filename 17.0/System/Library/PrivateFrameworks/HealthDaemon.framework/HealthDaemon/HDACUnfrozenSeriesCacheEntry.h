@interface HDACUnfrozenSeriesCacheEntry : NSObject {
    BOOL _hasTimestampBeenSet;
}

@property (readonly, nonatomic) long long series_identifier;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long dataTypeCode;
@property (readonly, nonatomic) long long workoutSourceIdentifier;
@property (readonly, nonatomic) long long sourceIdentifier;
@property (readonly, nonatomic) BOOL didFreeze;
@property (readonly, nonatomic) BOOL isWatchSource;
@property (readonly, nonatomic) BOOL isConnectedGymSource;
@property (readonly, nonatomic) BOOL typeIsValidForAllDayFromCompanion;

- (void)setTimestamp:(double)a0;
- (id)initWithSeriesId:(long long)a0 timestamp:(double)a1 dataTypeCode:(long long)a2 workoutSourceIdentifier:(long long)a3 sourceIdentifier:(long long)a4 isWatchSource:(BOOL)a5 isConnectedGymSource:(BOOL)a6 typeIsValidForAllDayFromCompanion:(BOOL)a7;
- (id)predicateForSeries;
- (void)setFrozen;

@end

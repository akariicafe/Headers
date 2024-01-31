@interface HKDisplayTypeBehavior : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long statisticsMergeStrategy;
@property (readonly, nonatomic) BOOL allowsSourceReordering;
@property (readonly, nonatomic) BOOL unitPreferencesRequireChangeConfirmation;
@property (readonly, nonatomic) long long preferredCalendarDayAlignment;
@property (readonly, nonatomic) BOOL chartsRelativeData;
@property (readonly, nonatomic) BOOL appearsInDataTypeSearch;
@property (readonly, nonatomic) BOOL supportsAssociatedSamples;
@property (readonly, nonatomic) BOOL canBecomeFavorite;
@property (readonly, nonatomic) BOOL hidden;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatisticsMergeStrategy:(unsigned long long)a0 preferredCalendaryDayAlignment:(long long)a1 allowsSourceReordering:(BOOL)a2 unitPreferenceChangeConfirmation:(BOOL)a3 chartsRelativeData:(BOOL)a4 appearsInDataTypeSearch:(BOOL)a5 supportsAssociatedSamples:(BOOL)a6 canBecomeFavorite:(BOOL)a7 hidden:(BOOL)a8;

@end

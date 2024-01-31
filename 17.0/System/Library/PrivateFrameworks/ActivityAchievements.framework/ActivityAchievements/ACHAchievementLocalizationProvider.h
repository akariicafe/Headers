@class NSCalendar, NSString, FIUnitManager, NSLocale, NSDate;

@interface ACHAchievementLocalizationProvider : NSObject

@property (retain, nonatomic) NSDate *currentDateOverride;
@property (retain, nonatomic) NSLocale *currentLocaleOverride;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL wheelchairUser;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) FIUnitManager *unitManager;

- (id)currentLocale;
- (id)init;
- (void).cxx_destruct;
- (id)currentDate;
- (id)achievedAlertDescriptionForAchievement:(id)a0 experienceType:(unsigned long long)a1;
- (id)titleForAchievement:(id)a0;
- (id)unachievedAlertDescriptionForAchievement:(id)a0 experienceType:(unsigned long long)a1;
- (id)unachievedDescriptionForAchievement:(id)a0;
- (id)localizedStringForKey:(id)a0 withAchievement:(id)a1 experienceType:(unsigned long long)a2;
- (id)shareDescriptionForAchievement:(id)a0;
- (id)_achievementValueWithAchievement:(id)a0;
- (id)_allStringCombinationsWithPrefix:(id)a0 andSuffixes:(id)a1;
- (id)_backDateStringForDate:(id)a0 achievement:(id)a1 dateStyle:(unsigned long long)a2;
- (id)_calculateSuffixCombinations:(id)a0;
- (id)_formatValue:(id)a0 forPlaceholder:(id)a1 usingFormatterNamed:(id)a2 template:(id)a3;
- (id)_formatValue:(id)a0 usingFormatterNamed:(id)a1 template:(id)a2 forCanonicalUnit:(id)a3;
- (id)_formattedEnergyValue:(id)a0 canonicalUnit:(id)a1 unitStyle:(long long)a2;
- (id)_formattedEnergyValueWithoutUnit:(id)a0 canonicalUnit:(id)a1;
- (id)_formattedMoveGoal:(id)a0 template:(id)a1;
- (id)_formattedMoveTimeValue:(id)a0;
- (id)_goalValueWithAchievement:(id)a0;
- (id)_localizedStringWithKey:(id)a0 withAchievement:(id)a1 experienceType:(unsigned long long)a2;
- (id)_localizedStringWithKey:(id)a0 withAchievement:(id)a1 localizationBundleURL:(id)a2 experienceType:(unsigned long long)a3;
- (id)_pluralizeLocalizedString:(id)a0 withAchievement:(id)a1;
- (id)_progressValueWithAchievement:(id)a0;
- (id)_quantityToGoalValueWithAchievement:(id)a0;
- (id)_remainingProgressValueWithUnit:(id)a0 achievement:(id)a1;
- (id)_replacePlaceholdersInString:(id)a0 withAchievement:(id)a1;
- (id)_stringByTrimmingPlaceholderMarkersFromString:(id)a0;
- (id)_suffixesForLocalizedStringLookup;
- (id)_userEnergyUnitSuffix;
- (id)_valueFromPlaceholder:(id)a0 withAchievement:(id)a1;
- (id)achievedAlertBackDescriptionForAchievement:(id)a0 sizeVariant:(long long)a1 dateSizeVariant:(long long)a2;
- (id)achievedDescriptionForAchievement:(id)a0;
- (id)achievedShortDescriptionForAchievement:(id)a0;
- (id)friendAchievedDescriptionForAchievement:(id)a0;
- (id)friendAchievedTitleForAchievement:(id)a0;
- (id)unachievedAlertBackDescriptionForAchievement:(id)a0;
- (id)unachievedShortDescriptionForAchievement:(id)a0;

@end

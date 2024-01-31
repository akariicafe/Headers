@class NSDate, NSCalendar, NSString, ACHMonthlyChallengeTemplateDataProvider, ACHSyncingMonthlyChallengeTemplateCache, NSObject, NRPairedDeviceRegistry, ACHMonthlyChallengeDataSource, NSNumber;
@protocol ACHTemplateSourceDelegate, ACHTemplateAssetSourceDelegate;

@interface ACHMonthlyChallengeTemplateSource : NSObject <ACHTemplateSource, ACHTemplateAssetSource> {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    NSNumber *_isStandalonePhoneFitnessModeOverride;
    NRPairedDeviceRegistry *_pairedDeviceRegistrySharedInstanceOverride;
}

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (nonatomic) BOOL isStandalonePhoneFitnessMode;
@property (retain, nonatomic) ACHMonthlyChallengeDataSource *dataSource;
@property (retain, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider;
@property (retain, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache;
@property (nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;

- (id)customPlaceholderValuesForTemplate:(id)a0 error:(id *)a1;
- (unsigned long long)_numberOfDaysInMonthForDate:(id)a0;
- (void)setIsStandalonePhoneFitnessModeOverride:(BOOL)a0;
- (id)possibleLocalizationSuffixesForTemplate:(id)a0;
- (void)setCurrentCalendarOverride:(id)a0;
- (unsigned long long)_getRandomMonthlyChallengeType;
- (id)_dateComponentIntervalForTwoMonthsAgo;
- (void)templatesForDate:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)isMonthlyChallengeOfTypeAvailable:(unsigned long long)a0 error:(id *)a1;
- (id)resourceBundleURLForTemplate:(id)a0;
- (id)_availableMonthlyChallengeTypes;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (void)_didOverrideMonthlyChallengeCadence;
- (id)_minimumValueForMonthlyChallengeType:(unsigned long long)a0;
- (BOOL)_shouldOverrideMonthlyChallengeCadence;
- (void)setPairedDeviceRegistrySharedInstanceOverride:(id)a0;
- (BOOL)_createMonthlyChallengeWithMonthDateInterval:(id)a0 monthlyChallengeTemplates:(id *)a1 error:(id *)a2;
- (id)_dateComponentIntervalForCurrentMonth;
- (id)_dateComponentIntervalForLastMonth;
- (long long)_monthlyChallengeTemplateSourceActionForDate:(id)a0 existingTemplate:(id)a1;
- (id)_suffixForCurrentMonthForType:(unsigned long long)a0 template:(id)a1 goal:(double)a2 error:(id *)a3;
- (double)_goalValueForCurrentMonthForType:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_isInFirstWeekOfCurrentMonth:(id)a0;
- (BOOL)sourceShouldRunForDate:(id)a0;
- (void)setCurrentDateOverride:(id)a0;
- (double)_targetGoalValueForCurrentMonthForType:(unsigned long long)a0 error:(id *)a1;
- (id)_maximumValueForMonthlyChallengeType:(unsigned long long)a0;
- (id)_createMonthlyChallengeTemplateWithType:(unsigned long long)a0 dateCompoonentInterval:(id)a1 goalValue:(double)a2;
- (id)_pairedWatchDeviceCapabilities;
- (id)pairedDeviceRegistrySharedInstance;
- (BOOL)subObjectsHaveDatabaseAssertions;
- (id)propertyListBundleURLForTemplate:(id)a0;
- (void)templatesForDate:(id)a0 completion:(id /* block */)a1;
- (double)_capGoalValueForChallengeType:(unsigned long long)a0 goalValue:(double)a1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)initWithDataSource:(id)a0 dataProvider:(id)a1 templateCache:(id)a2;
- (BOOL)isGoalValueForMonthlyChallengeTypeValid:(unsigned long long)a0 error:(id *)a1;
- (id)_modelsDirectoryBasePathForTemplate:(id)a0;
- (void)_removeMonthlyChallengeTemplate:(id)a0 monthlyChallengeTemplates:(id *)a1 templatesToRemove:(id *)a2;
- (double)_roundedGoalValue:(double)a0 monthlyChallengeType:(unsigned long long)a1;

@end

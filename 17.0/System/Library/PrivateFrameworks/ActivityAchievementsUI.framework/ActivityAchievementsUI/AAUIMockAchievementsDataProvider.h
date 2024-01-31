@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider {
    NSArray *_achievements;
}

- (id)init;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)_distanceUnitForLocale:(id)a0;
- (void)stopFetching;
- (id)_ACHDateComponentIntervalWithMonthOffset:(unsigned long long)a0;
- (id)_achievementForTemplate:(id)a0 earnedInstanceCount:(long long)a1 earnedInstanceOffset:(long long)a2 earnedInstanceValue:(long long)a3 goalValue:(long long)a4 progressValue:(long long)a5;
- (id)_currentMonthlyChallengeAchievementForTemplate:(id)a0 localizableSuffix:(id)a1 goalValue:(long long)a2 progressValue:(long long)a3 isEarned:(BOOL)a4;
- (id)_dateComponentsWithDayOffset:(long long)a0;
- (id)_fitnessUIAssetsURLWithKey:(id)a0 value:(id)a1;
- (id)_monthStringFromTemplateName:(id)a0;
- (id)achievementAtIndexPath:(id)a0;
- (void)addInitialLoadObserver:(id)a0;
- (void)addMainSectionObserver:(id)a0;
- (void)addRecentAndRelevantSectionObserver:(id)a0;
- (id)headerStringForSection:(long long)a0 isRecentAndRelevant:(BOOL)a1;
- (id)recentAndRelevantAchievementAtIndexPath:(id)a0;
- (void)removeInitialLoadObserver:(id)a0;
- (void)removeMainSectionObserver:(id)a0;
- (void)removeRecentAndRelevantSectionObserver:(id)a0;
- (void)startFetching;

@end

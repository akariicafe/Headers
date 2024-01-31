@class NSArray, NSString, NSLocale;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate>

@property (readonly, nonatomic) NSArray *eventRules;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)enumerateEventRulesBetweenLocalDate:(id)a0 andLocalDate:(id)a1 supportedCountryCode:(id)a2 usingBlock:(id /* block */)a3;
- (void)enumerateEventRulesForAllCountriesBetweenLocalDate:(id)a0 andLocalDate:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEventRulesForAllCountriesWithNames:(id)a0 betweenLocalDate:(id)a1 andLocalDate:(id)a2 usingBlock:(id /* block */)a3;
- (void)enumerateEventRulesWithNames:(id)a0 betweenLocalDate:(id)a1 andLocalDate:(id)a2 supportedCountryCode:(id)a3 usingBlock:(id /* block */)a4;
- (void)enumerateEventRulesWithNames:(id)a0 betweenLocalDate:(id)a1 andLocalDate:(id)a2 usingBlock:(id /* block */)a3;
- (id)eventRuleForHolidayName:(id)a0;
- (id)eventRulesForLocalDate:(id)a0;
- (unsigned long long)peopleTraitForHolidayName:(id)a0;
- (id)sceneNamesForHolidayName:(id)a0;
- (id)supportedLanguageCodes;
- (id)triggerHolidaysForCountryCode:(id)a0;
- (void)_enumerateEventRulesWithNames:(id)a0 betweenLocalDate:(id)a1 andLocalDate:(id)a2 supportedCountryCode:(id)a3 usingBlock:(id /* block */)a4;
- (id)_ruleWithUUID:(id)a0 countryCode:(id *)a1;
- (id)dateForRuleWithUUID:(id)a0 byEvaluatingForYear:(long long)a1;
- (id)eventRuleForHolidayName:(id)a0 localDate:(id)a1;
- (id)initWithEventRules:(id)a0 locale:(id)a1;
- (id)initWithLocale:(id)a0 calendarSourcesURL:(id)a1;

@end

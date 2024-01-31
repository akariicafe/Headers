@class PGHolidayClassifier, NSMutableDictionary, PGGraphPersonNodeCollection, PGGraphMeNodeCollection;

@interface PGGraphIngestHolidayProcessorHelper : NSObject {
    PGHolidayClassifier *_holidayClassifier;
    PGGraphMeNodeCollection *_meNodeAsCollection;
    PGGraphPersonNodeCollection *_partnerPersonNodes;
    PGGraphPersonNodeCollection *_familyPersonNodes;
    PGGraphPersonNodeCollection *_childPersonNodes;
    PGGraphPersonNodeCollection *_fatherPersonNodes;
    PGGraphPersonNodeCollection *_motherPersonNodes;
    PGGraphPersonNodeCollection *_friendPersonNodes;
    PGGraphPersonNodeCollection *_coworkerPersonNodes;
    PGGraphPersonNodeCollection *_nonAcquaintancePersonNodes;
    unsigned long long _meBiologicalSex;
    NSMutableDictionary *_biologicalSexByPartnerPersonNodeIdentifier;
}

+ (id)keyboardLanguageCodesForInfoNode:(id)a0 holidayService:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (double)_calculateSceneScores:(id)a0;
- (double)_dateScoreForEventRule:(id)a0 localeCode:(id)a1 holidayDate:(id)a2 momentDate:(id)a3;
- (unsigned long long)_eventRuleLocationTraitForMomentNode:(id)a0 graph:(id)a1;
- (unsigned long long)_eventRulePeopleTraitForPersonNodes:(id)a0 graph:(id)a1;
- (double)dateScoreForEventRule:(id)a0 localeCountryCode:(id)a1 momentCountryCodes:(id)a2 keyboardLanguageCodes:(id)a3 momentDate:(id)a4;
- (id)holidayCalendarEventRuleTraitsForMomentNode:(id)a0;
- (BOOL)isCelebratingForEventRule:(id)a0 momentNode:(id)a1 momentLocalDate:(id)a2 withGraph:(id)a3 loggingConnection:(id)a4 localeCountryCode:(id)a5 keyboardLanguageCodes:(id)a6;
- (double)locationScoreForEventRule:(id)a0 localeCountryCode:(id)a1 momentCountryCodes:(id)a2 keyboardLanguageCodes:(id)a3;
- (BOOL)momentTraitsMatchesHolidayTraits:(id)a0 momentNode:(id)a1 loggingConnection:(id)a2;
- (id)momentsCelebratingRule:(id)a0 localDates:(id)a1 userCountryCode:(id)a2 keyboardLanguageCodes:(id)a3 graph:(id)a4 loggingConnection:(id)a5;
- (void)prepareIfNeededWithGraph:(id)a0;
- (double)sceneScoreForEventRule:(id)a0 localeCountryCode:(id)a1 momentCountryCodes:(id)a2 keyboardLanguageCodes:(id)a3 momentNode:(id)a4;

@end

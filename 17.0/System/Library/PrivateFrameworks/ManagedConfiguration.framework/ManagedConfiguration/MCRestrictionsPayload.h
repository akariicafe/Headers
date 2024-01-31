@class NSString, NSMutableDictionary;

@interface MCRestrictionsPayload : MCPayload {
    NSMutableDictionary *_restrictions;
}

@property (retain, nonatomic) NSString *iCloudPassword;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)restrictions;
- (id)_defaultValueRestrictions;
- (id)_enforcedFeatureStrings;
- (void)_insertRestrictedBoolForKey:(id)a0 value:(id)a1 preferenc:(BOOL)a2;
- (id)_intersectionStrings;
- (id)_invalidFieldErrorWithFieldName:(id)a0;
- (id)_restrictedFeatureStrings;
- (id)_unionStrings;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)localizedRestrictionStrings;
- (id)stubDictionary;

@end

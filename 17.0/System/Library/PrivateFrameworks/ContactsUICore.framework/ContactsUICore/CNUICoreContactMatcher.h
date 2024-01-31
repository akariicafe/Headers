@interface CNUICoreContactMatcher : NSObject

+ (BOOL)doesContact:(id)a0 matchAnyParentOrGuardianInFamily:(id)a1;
+ (BOOL)doesContact:(id)a0 matchContact:(id)a1;
+ (BOOL)doesNameOfContact:(id)a0 matchNameOfContact:(id)a1;
+ (BOOL)doesNameOfContact:(id)a0 matchNameOfFamilyMember:(id)a1;
+ (id)nameFromFammilyMember:(id)a0;

@end

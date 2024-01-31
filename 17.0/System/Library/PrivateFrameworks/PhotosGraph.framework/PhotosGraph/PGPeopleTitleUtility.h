@interface PGPeopleTitleUtility : NSObject

+ (id)_ageStringWithStartAge:(long long)a0 endAge:(long long)a1;
+ (id)_placeDisplayNameForPeopleAddressNodeLabel:(id)a0 titleComponent:(id)a1 containsMe:(BOOL)a2;
+ (id)ageStringForPersonNode:(id)a0 date:(id)a1;
+ (id)ageStringForPersonNode:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)beautifiedLocationStringWithPersonNode:(id)a0 peopleAddressEdge:(id)a1 titleComponent:(id)a2 insertLineBreak:(BOOL)a3 allowFamilyHome:(BOOL)a4;
+ (id)nameFromPersonNode:(id)a0;
+ (id)nameStringForPersonNodes:(id)a0 includeMe:(BOOL)a1 allowUnnamed:(BOOL)a2 allowedGroupsFormat:(unsigned long long)a3 insertLineBreaks:(BOOL)a4;
+ (id)nameStringForPersonNodes:(id)a0 includeMe:(BOOL)a1 insertLineBreaks:(BOOL)a2;
+ (id)peopleGroupNameForPersonNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1;
+ (id)peopleGroupNameForPersonNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1 fallbackToGeneric:(BOOL)a2;

@end

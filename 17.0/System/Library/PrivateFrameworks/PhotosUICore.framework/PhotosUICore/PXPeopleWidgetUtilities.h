@interface PXPeopleWidgetUtilities : NSObject

+ (id)localizedTitleStringForHasGroups:(BOOL)a0 hasPeople:(BOOL)a1 hasPets:(BOOL)a2;
+ (id)localizedTitleStringForWidgetDataSource:(id)a0 photoLibrary:(id)a1;
+ (id)verifiedPersonsFromMergeCandidatesForPersons:(id)a0;
+ (id)widgetOrderedMembersFromSortedArray:(id)a0 inSocialGroupPredicate:(id)a1 maximumNumberOfMembersNotInSocialGroupForFront:(unsigned long long)a2;

@end

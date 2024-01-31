@interface PGHighlightsTitleSpecFactory : NSObject

+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(BOOL)a0 allowAllCities:(BOOL)a1;
+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)a0;
+ (id)specCollectionForMeaningLabel:(id)a0 allowAllCities:(BOOL)a1;
+ (id)specPoolForAOILocation;
+ (id)specPoolForBusinessItem;
+ (id)specPoolForGenericLocation:(BOOL)a0;
+ (id)specPoolForPublicEvent;
+ (id)specPoolForPublicEventWithBusiness;
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(BOOL)a0 allowAllCities:(BOOL)a1;
+ (id)titleSpecForGenericLocation:(BOOL)a0;
+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(BOOL)a0;

@end

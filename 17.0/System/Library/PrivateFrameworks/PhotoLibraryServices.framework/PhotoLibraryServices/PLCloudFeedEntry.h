@class NSString, NSURL, NSDate, NSNumber;

@interface PLCloudFeedEntry : PLManagedObject

@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSNumber *entryTypeNumber;
@property (retain, nonatomic) NSNumber *entryPriorityNumber;
@property (retain, nonatomic) NSString *entryAlbumGUID;
@property (retain, nonatomic) NSString *entryInvitationRecordGUID;
@property (readonly, weak, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) long long entryType;
@property (readonly, nonatomic) long long entryPriority;

+ (id)entityName;
+ (id)notificationPredicateForFilter:(long long)a0;
+ (id)_recentEntriesInLibrary:(id)a0 forEntity:(id)a1 usingPredicate:(id)a2 earliestDate:(id)a3 latestDate:(id)a4 limit:(long long)a5 sortDescriptors:(id)a6;
+ (id)additionalPrediateForFilter:(long long)a0;
+ (id)allEntriesInLibrary:(id)a0;
+ (id)allEntriesInManagedObjectContext:(id)a0;
+ (id)entityForFilter:(long long)a0 inManagedObjectContext:(id)a1;
+ (id)entriesSortDescriptorsAscending:(BOOL)a0;
+ (id)entryWithURIRepresentation:(id)a0 inLibrary:(id)a1;
+ (id)filterPredicateForFilter:(long long)a0;
+ (id)firstEntryWithType:(long long)a0 albumGUID:(id)a1 inLibrary:(id)a2;
+ (id)recentAssetsEntriesInLibrary:(id)a0 limit:(long long)a1;
+ (id)recentEntriesInLibrary:(id)a0 earliestDate:(id)a1 latestDate:(id)a2 limit:(long long)a3 filter:(long long)a4 sortDescriptors:(id)a5;

- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)a0;

@end

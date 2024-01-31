@class NSSet, STUsage, NSDate;

@interface STUsageBlock : NSManagedObject

@property (retain, nonatomic) NSDate *lastEventDate;
@property (retain, nonatomic) NSDate *longestSessionStartDate;
@property (retain, nonatomic) NSDate *longestSessionEndDate;
@property (nonatomic) long long screenTimeInSeconds;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) long long durationInMinutes;
@property (retain, nonatomic) NSDate *firstPickupDate;
@property (nonatomic) long long numberOfPickupsWithoutApplicationUsage;
@property (retain, nonatomic) NSSet *categories;
@property (retain, nonatomic) NSSet *countedItems;
@property (retain, nonatomic) STUsage *usage;

+ (id)fetchRequestMatchingUsage:(id)a0 dateInterval:(id)a1;
+ (long long)totalNotificationsForUsageBlocks:(id)a0;
+ (long long)totalPickupsForUsageBlocks:(id)a0;
+ (double)totalScreenTimeForUsageBlocks:(id)a0;
+ (id)usageCategoriesForUsageBlocks:(id)a0;
+ (id)usageCountedItemsForUsageBlocks:(id)a0;

@end

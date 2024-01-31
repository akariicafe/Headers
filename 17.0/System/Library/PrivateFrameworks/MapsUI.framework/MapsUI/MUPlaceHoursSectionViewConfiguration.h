@class NSArray, MUBusinessHoursConfiguration;

@interface MUPlaceHoursSectionViewConfiguration : NSObject

@property (retain, nonatomic) MUBusinessHoursConfiguration *placeHours;
@property (retain, nonatomic) NSArray *serviceHoursList;
@property (nonatomic) unsigned long long numberOfInlineServiceHours;

+ (id)configurationForBusinessHours:(id)a0;
+ (id)configurationForMapItem:(id)a0;
+ (id)configurationForMessagesMapItem:(id)a0;

- (void).cxx_destruct;

@end

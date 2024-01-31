@class NSDictionary, PXContextualMemoriesTimeSetting, NSArray, PXContextualMemoriesLocationSetting, NSDate, CLLocation, PXContextualMemoriesPeopleSetting;

@interface PXContextualMemoriesSettings : NSObject

@property (readonly, nonatomic) PXContextualMemoriesTimeSetting *timeSetting;
@property (readonly, nonatomic) PXContextualMemoriesLocationSetting *locationSetting;
@property (readonly, nonatomic) PXContextualMemoriesPeopleSetting *peopleSetting;
@property (readonly, nonatomic) NSArray *settings;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *peopleNames;
@property (copy, nonatomic) NSDictionary *extraParameters;

- (id)init;
- (void).cxx_destruct;

@end

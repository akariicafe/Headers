@class NSArray;

@interface VSAppSettingsViewModelResult : NSObject

@property (copy, nonatomic) NSArray *availableAppViewModels;
@property (copy, nonatomic) NSArray *nonChannelAppViewModels;
@property (copy, nonatomic) NSArray *subscribedAppViewModels;

- (id)init;
- (void).cxx_destruct;

@end

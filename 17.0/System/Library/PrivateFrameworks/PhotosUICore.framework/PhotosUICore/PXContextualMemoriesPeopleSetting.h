@class NSArray, NSString;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting>

@property (retain, nonatomic) NSArray *peopleNames;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resetToDefault;
- (void)requestPeopleNamesUpdateSinceDate:(id)a0 withCompletionHandler:(id /* block */)a1;

@end

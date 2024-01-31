@class FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration, FCNewsTabiChannelPickerSuggestionsUserContextConfiguration, NSDictionary;

@interface FCNewsTabiChannelPickerSuggestionsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsUserContextConfiguration *userContextConfiguration;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleInputOutputConfiguration:(id)a0 nonBundleInputOutputConfiguration:(id)a1 userContextConfiguration:(id)a2;

@end

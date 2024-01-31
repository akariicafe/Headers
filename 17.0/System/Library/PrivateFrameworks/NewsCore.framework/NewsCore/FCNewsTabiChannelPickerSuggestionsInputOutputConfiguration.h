@class NSString, NSDictionary;

@interface FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *generalChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *generalChannelSuggestionsScoreOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsScoreOutputName;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContextFeatureKey:(id)a0 generalChannelSuggestionsOutputName:(id)a1 generalChannelSuggestionsScoreOutputName:(id)a2 newsPlusChannelSuggestionsOutputName:(id)a3 newsPlusChannelSuggestionsScoreOutputName:(id)a4;

@end

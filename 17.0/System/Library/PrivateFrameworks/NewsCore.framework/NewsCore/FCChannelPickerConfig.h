@class NSString, FCContentColorPair, NSArray;

@interface FCChannelPickerConfig : NSObject

@property (readonly, nonatomic) NSString *pickerID;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) FCContentColorPair *featureTextColor;
@property (readonly, copy, nonatomic) NSArray *initialChannelIDs;
@property (readonly, nonatomic) BOOL showRelatedChannels;

- (id)initWithPickerID:(id)a0 configDictionary:(id)a1;
- (void).cxx_destruct;

@end

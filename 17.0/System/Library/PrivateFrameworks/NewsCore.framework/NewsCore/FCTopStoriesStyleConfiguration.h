@class NSString, NTPBTopStoriesStyleConfig, NSDictionary, FCColor;

@interface FCTopStoriesStyleConfiguration : NSObject {
    NTPBTopStoriesStyleConfig *_pbConfig;
    NSDictionary *_configDict;
}

@property (readonly, nonatomic) unsigned long long storyType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) FCColor *foreground_color;
@property (readonly, nonatomic) FCColor *dark_style_foreground_color;
@property (readonly, nonatomic) FCColor *background_color;
@property (readonly, nonatomic) FCColor *dark_style_background_color;
@property (readonly, nonatomic) NSString *stringType;

- (id)initWithConfigDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithPBTopStoriesStyleConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

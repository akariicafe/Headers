@class NSDictionary, NSSet;

@interface SGQuickResponsesToRobotsConfig : NSObject

@property (readonly, nonatomic) NSDictionary *supportedKeysAndContext;
@property (readonly, nonatomic) NSSet *generalContextWords;
@property (readonly, nonatomic) NSSet *triggerWords;
@property (readonly, nonatomic) unsigned long long leftContext;
@property (readonly, nonatomic) unsigned long long rightContext;
@property (readonly, nonatomic) unsigned long long generalContextLeft;
@property (readonly, nonatomic) unsigned long long generalContextRight;
@property (readonly, nonatomic) unsigned long long triggerContext;
@property (readonly, nonatomic) BOOL enableFeature;
@property (readonly, nonatomic) BOOL relaxContext;
@property (readonly, nonatomic) BOOL useGeneralContext;
@property (readonly, nonatomic) BOOL insignificantSender;
@property (readonly, nonatomic) float capsWordsRatioMax;

+ (id)sharedInstance;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

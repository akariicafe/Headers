@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyToTTSEngineMap;

+ (id)sharedInstance;
+ (id)getKeyByVoiceAsset:(id)a0 resourceAsset:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)getEngineByVoiceAsset:(id)a0 resourceAsset:(id)a1;
- (void)removeAllEngines;
- (void)removeEngineByVoiceAsset:(id)a0 resourceAsset:(id)a1;

@end

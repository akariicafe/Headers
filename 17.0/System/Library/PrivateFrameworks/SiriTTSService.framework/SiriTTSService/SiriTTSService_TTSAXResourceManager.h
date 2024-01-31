@class NSArray, TTSAXResourceManager;

@interface SiriTTSService_TTSAXResourceManager : NSObject

@property (class, readonly, nonatomic) SiriTTSService_TTSAXResourceManager *sharedInstance;

@property (retain, nonatomic) NSArray *allCompactResources;
@property (retain, nonatomic) TTSAXResourceManager *axManager;

- (id)init;
- (void).cxx_destruct;

@end

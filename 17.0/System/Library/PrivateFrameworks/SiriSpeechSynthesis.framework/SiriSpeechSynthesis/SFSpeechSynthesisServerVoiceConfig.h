@class NSString;

@interface SFSpeechSynthesisServerVoiceConfig : NSObject

@property (readonly, nonatomic) NSString *ospreyEndpointUrl;
@property (readonly, nonatomic) BOOL useBlazar;
@property (readonly, nonatomic) BOOL enableAuthentication;

+ (id)getTtsServerEndpointByCluster:(id)a0 withServiceType:(id)a1;

- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 useBlazar:(BOOL)a1 enableAuthentication:(BOOL)a2;

@end

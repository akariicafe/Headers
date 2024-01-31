@class NSString, NSDictionary;

@interface IEInputGroup : NSObject

@property (retain, nonatomic) NSString *inputGroupId;
@property (nonatomic) BOOL listenAfterSpeaking;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) NSString *dialogPhase;
@property (retain, nonatomic) NSDictionary *nlParameters;
@property (nonatomic) BOOL immersiveExperience;

- (void).cxx_destruct;
- (id)initWithId:(id)a0;

@end

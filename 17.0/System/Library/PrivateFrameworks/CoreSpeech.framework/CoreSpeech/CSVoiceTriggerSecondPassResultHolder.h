@class NSDictionary;

@interface CSVoiceTriggerSecondPassResultHolder : NSObject

@property (readonly, nonatomic) unsigned long long result;
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly, nonatomic) BOOL isSecondChanceCandidate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResult:(unsigned long long)a0 voiceTriggerEventInfo:(id)a1 isSecondChanceCandidate:(BOOL)a2;

@end

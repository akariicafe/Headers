@class NSString;

@interface SNVoiceTriggerCommand : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long minDurationBlocks;
@property (readonly, nonatomic) double confidenceThreshold;

- (void).cxx_destruct;

@end

@class NSArray, NSMapTable, TLAlertStoppingOptions;

@interface TLAlertSystemSoundStopTasksDescriptor : NSObject

@property (retain, nonatomic) NSMapTable *interruptedAlertsToSound;
@property (copy, nonatomic) NSArray *playbackCompletionContextsToProcess;
@property (copy, nonatomic) TLAlertStoppingOptions *options;
@property (nonatomic) long long playbackCompletionType;

- (void).cxx_destruct;

@end

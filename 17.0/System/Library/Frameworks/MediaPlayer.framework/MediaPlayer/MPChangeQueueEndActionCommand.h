@class NSArray;

@interface MPChangeQueueEndActionCommand : MPRemoteCommand

@property (nonatomic) long long currentQueueEndAction;
@property (copy, nonatomic) NSArray *supportedQueueEndActions;

- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;

@end

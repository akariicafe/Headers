@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand {
    NSArray *_supportedShuffleTypes;
}

@property (nonatomic) long long currentShuffleType;

- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (id)newCommandEventWithType:(long long)a0;
- (id)newCommandEventWithType:(long long)a0 preservesShuffleMode:(BOOL)a1;
- (void)setSupportedShuffleTypes:(id)a0;

@end

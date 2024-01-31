@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preferredIntervals;

- (id)newCommandEventWithInterval:(double)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void).cxx_destruct;

@end

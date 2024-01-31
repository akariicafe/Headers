@class AVCoordinatedPlaybackParticipant, NSString;

@interface AVDelegatingPlaybackCoordinatorPlaybackControlCommand : NSObject

@property (readonly, nonatomic) AVCoordinatedPlaybackParticipant *originator;
@property (readonly, nonatomic) NSString *expectedCurrentItemIdentifier;

- (id)init;
- (id)initInternal;

@end

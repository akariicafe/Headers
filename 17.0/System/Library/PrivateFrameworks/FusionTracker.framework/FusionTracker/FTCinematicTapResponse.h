@class FTCinematicTrack, FTCinematicTapRequest;

@interface FTCinematicTapResponse : NSObject

@property (retain, nonatomic) FTCinematicTapRequest *request;
@property (nonatomic) BOOL wasSuccessful;
@property (retain, nonatomic) FTCinematicTrack *tappedTrack;

- (void).cxx_destruct;

@end

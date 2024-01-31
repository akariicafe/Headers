@class NSNumber, NSString, SMContributor, NSSet, NSDateComponents, NSURL, NSArray;

@interface SMCatalogWorkout : NSObject {
    void /* unknown type, empty encoding */ workout;
}

@property (nonatomic, readonly) NSDateComponents *dateReleased;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) SMContributor *narrator;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSSet *artwork;
@property (nonatomic, readonly) NSURL *streamingURL;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSArray *musicTracks;
@property (nonatomic, readonly) NSURL *musicPlaylistURL;
@property (nonatomic, readonly) NSString *musicPlaylistIdentifier;
@property (nonatomic, readonly) NSSet *mediaMoments;
@property (nonatomic, readonly) BOOL isGuidedWalk;
@property (nonatomic, readonly) BOOL isGuidedRun;
@property (nonatomic, readonly) BOOL isGuidedVideo;
@property (nonatomic, readonly) NSNumber *mediaTypeRawValue;

- (id)init;
- (void).cxx_destruct;

@end

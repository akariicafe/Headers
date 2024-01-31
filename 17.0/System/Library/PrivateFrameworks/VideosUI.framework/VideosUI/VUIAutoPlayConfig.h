@interface VUIAutoPlayConfig : NSObject

@property (nonatomic) double autoPlayDelayInterval;
@property (nonatomic) BOOL autoPlayVideoSound;
@property (readonly, nonatomic) BOOL disableBackgroundMediaPlayback;

- (id)init;

@end

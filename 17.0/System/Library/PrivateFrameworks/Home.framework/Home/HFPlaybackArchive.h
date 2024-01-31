@class MPPlaybackArchive;

@interface HFPlaybackArchive : NSObject

@property (retain, nonatomic) MPPlaybackArchive *mediaPlayerPlaybackArchive;
@property (nonatomic) unsigned long long targetOptions;
@property (readonly, nonatomic) BOOL isShuffleSupported;
@property (readonly, nonatomic) BOOL isRepeatSupported;
@property (nonatomic, getter=isShuffleEnabled) BOOL shuffleEnabled;
@property (nonatomic, getter=isRepeatEnabled) BOOL repeatEnabled;
@property (nonatomic, getter=isAutoPlayEnabled) BOOL autoPlayEnabled;

- (void).cxx_destruct;
- (id)initWithMediaPlayerPlaybackArchive:(id)a0;

@end

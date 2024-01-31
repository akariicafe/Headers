@class NSArray, NSURL, UIImage, ETSketchMessage, NSMutableArray;

@interface ETVideoMessage : ETMessage {
    NSMutableArray *_playingMessages;
    double _compressedTimeTotal;
    double _compressedTimeLastEventTime;
    double _messageDuration;
}

@property (retain, nonatomic) NSArray *playingMessages;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) UIImage *stillImage;
@property (retain, nonatomic) ETSketchMessage *introMessage;
@property (nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) BOOL canCompressTime;
@property (nonatomic) BOOL pauseTimeCompression;

+ (unsigned short)messageType;

- (BOOL)isAnimated;
- (id)init;
- (id)archiveData;
- (void).cxx_destruct;
- (id)initWithArchiveData:(id)a0;
- (double)messageDuration;
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)a0;
- (unsigned long long)_mediaTypeFromETPVideoType:(int)a0;
- (double)compressTimeSinceStartOfMessage:(double)a0;
- (id)messageTypeAsString;
- (BOOL)shouldLoopDuringPlayback;

@end

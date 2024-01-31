@class NSURL, NSString;

@interface LPiTunesMediaOffer : NSObject

@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasVideo;

+ (BOOL)hasAudioForOffer:(id)a0;
+ (BOOL)hasVideoForOffer:(id)a0;
+ (id)previewURLForOffer:(id)a0;
+ (id)typeForOffer:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

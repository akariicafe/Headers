@class NSString, NSURL;

@interface WFShazamMedia : NSObject <WFNaming, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appleMusicID;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSURL *shazamURL;
@property (readonly, copy, nonatomic) NSURL *appleMusicURL;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, copy, nonatomic) NSURL *videoURL;
@property (readonly, copy, nonatomic) NSString *lyricsSnippet;
@property (readonly, copy, nonatomic) NSString *lyricsSnippetSynced;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaItem:(id)a0;

@end

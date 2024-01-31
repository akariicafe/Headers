@class NSString, NSURL, NSArray;

@interface GEOAppleMediaServicesResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iOSBundleIdentifier;
@property (retain, nonatomic) NSURL *artworkURL;
@property (nonatomic) int ratingsCount;
@property (nonatomic) float ratingsValue;
@property (copy, nonatomic) NSString *artistName;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *editorialSubtitle;
@property (readonly, nonatomic) NSArray *transitModes;
@property (readonly, nonatomic) NSString *classType;
@property (readonly, nonatomic) int episodeNumber;
@property (readonly, nonatomic) double duration;

+ (id)_artworkDictionaryFromResponseDictionary:(id)a0;

- (BOOL)isAppInstalled;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 mediaType:(long long)a1 displayName:(id)a2 shortName:(id)a3 artistName:(id)a4 url:(id)a5 subtitle:(id)a6 editorialSubtitle:(id)a7 iOSBundleIdentifier:(id)a8 artworkURL:(id)a9 ratingsCount:(int)a10 ratingsValue:(float)a11 transitModes:(id)a12 classType:(id)a13 episodeNumber:(int)a14 duration:(double)a15;
- (id)initWithResponseDictionary:(id)a0 mediaType:(long long)a1 artworkSize:(struct CGSize { double x0; double x1; })a2 screenScale:(double)a3;

@end

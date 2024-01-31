@class NSString;

@interface BMSiriMusicInferenceTrainingIndependentSignals : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int clientDayOfWeek;
@property (nonatomic) BOOL hasClientDayOfWeek;
@property (readonly, nonatomic) int rawClientHourOfDay;
@property (nonatomic) BOOL hasRawClientHourOfDay;
@property (readonly, nonatomic) BOOL isMediaAlbumPresent;
@property (nonatomic) BOOL hasIsMediaAlbumPresent;
@property (readonly, nonatomic) BOOL isMediaArtistPresent;
@property (nonatomic) BOOL hasIsMediaArtistPresent;
@property (readonly, nonatomic) BOOL isMediaGenrePresent;
@property (nonatomic) BOOL hasIsMediaGenrePresent;
@property (readonly, nonatomic) BOOL isMediaMoodPresent;
@property (nonatomic) BOOL hasIsMediaMoodPresent;
@property (readonly, nonatomic) BOOL isMediaNamePresent;
@property (nonatomic) BOOL hasIsMediaNamePresent;
@property (readonly, nonatomic) BOOL isMediaReleaseDatePresent;
@property (nonatomic) BOOL hasIsMediaReleaseDatePresent;
@property (readonly, nonatomic) int nowPlayingLastBundleRecencyS;
@property (nonatomic) BOOL hasNowPlayingLastBundleRecencyS;
@property (readonly, nonatomic) long long rawLanguage;
@property (nonatomic) BOOL hasRawLanguage;
@property (readonly, nonatomic) long long rawLocale;
@property (nonatomic) BOOL hasRawLocale;
@property (readonly, nonatomic) long long rawRegion;
@property (nonatomic) BOOL hasRawRegion;
@property (readonly, nonatomic) BOOL isClientDaylight;
@property (nonatomic) BOOL hasIsClientDaylight;
@property (readonly, nonatomic) BOOL isClientNavigating;
@property (nonatomic) BOOL hasIsClientNavigating;
@property (readonly, nonatomic) BOOL isClientWorkout;
@property (nonatomic) BOOL hasIsClientWorkout;
@property (readonly, nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) int nowPlayingState;
@property (nonatomic) BOOL hasNowPlayingState;
@property (readonly, nonatomic) BOOL isPireneRequest;
@property (nonatomic) BOOL hasIsPireneRequest;
@property (readonly, nonatomic) double foregroundBundleRecencyS;
@property (nonatomic) BOOL hasForegroundBundleRecencyS;
@property (readonly, nonatomic) int mediaParsecCategory;
@property (nonatomic) BOOL hasMediaParsecCategory;
@property (readonly, nonatomic) int sirikitResponseCode;
@property (nonatomic) BOOL hasSirikitResponseCode;
@property (readonly, nonatomic) int appSelectionUses;
@property (nonatomic) BOOL hasAppSelectionUses;
@property (readonly, nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) int resolutionType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (id)initWithClientDayOfWeek:(id)a0 rawClientHourOfDay:(id)a1 isMediaAlbumPresent:(id)a2 isMediaArtistPresent:(id)a3 isMediaGenrePresent:(id)a4 isMediaMoodPresent:(id)a5 isMediaNamePresent:(id)a6 isMediaReleaseDatePresent:(id)a7 nowPlayingLastBundleRecencyS:(id)a8 rawLanguage:(id)a9 rawLocale:(id)a10 rawRegion:(id)a11 isClientDaylight:(id)a12 isClientNavigating:(id)a13 isClientWorkout:(id)a14 mediaType:(id)a15 nowPlayingState:(id)a16 isPireneRequest:(id)a17 foregroundBundleRecencyS:(id)a18 mediaParsecCategory:(id)a19 sirikitResponseCode:(id)a20 appSelectionUses:(id)a21 modelVersion:(id)a22 resolutionType:(int)a23;

@end

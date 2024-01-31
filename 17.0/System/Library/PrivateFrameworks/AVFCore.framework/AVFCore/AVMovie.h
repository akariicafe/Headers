@class NSArray, NSURL, NSData, AVMediaDataStorage, AVMovieInternal;

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying> {
    AVMovieInternal *_movie;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) BOOL canContainMovieFragments;
@property (readonly, nonatomic) BOOL containsMovieFragments;

+ (void)initialize;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)movieTypes;
+ (id)movieWithData:(id)a0 options:(id)a1;
+ (id)movieWithURL:(id)a0 options:(id)a1;

- (id)init;
- (void)dealloc;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0 URL:(id)a1 data:(id)a2 options:(id)a3;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (Class)_classForTrackInspectors;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)_initWithFigError:(int)a0 userInfo:(id)a1;
- (BOOL)isDefunct;
- (id)description;
- (id)trackReferences;
- (id)_initializationOptions;
- (void).cxx_destruct;
- (id)trackWithTrackID:(int)a0;
- (BOOL)hasProtectedContent;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (id)tracksWithMediaType:(id)a0;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_assetInspector;
- (id)_absoluteURL;
- (id)_assetInspectorLoader;
- (Class)_classForMovieTracks;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (struct OpaqueFigMutableMovie { } *)_mutableMovieForFileType:(id)a0;
- (void)_startListeningToLoaderNotifications;
- (void)_stopListeningToLoaderNotifications;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (BOOL)isCompatibleWithFileType:(id)a0;
- (id)movieHeaderWithFileType:(id)a0 error:(id *)a1;
- (unsigned long long)referenceRestrictions;
- (BOOL)writeMovieHeaderToURL:(id)a0 fileType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end

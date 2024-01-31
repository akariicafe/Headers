@class VUIAppContext, NSString, MPMediaItem, NSArray, NSDictionary, NSDate;

@interface VUIActionPlay : VUIAction

@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback;
@property (readonly, nonatomic) NSString *playType;
@property (retain, nonatomic) MPMediaItem *mpMediaItem;
@property (retain, nonatomic) NSString *sidebandLibraryAdamID;
@property (nonatomic) long long watchType;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic) BOOL isRentAndWatchNow;
@property (nonatomic) BOOL playRequiresAccount;
@property (readonly, nonatomic) NSArray *multiviewPlayables;
@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) VUIAppContext *appContext;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)a0;
+ (void)_playMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 watchType:(long long)a2 extrasInfo:(id)a3 playType:(id)a4 isRentAndWatchNow:(BOOL)a5 completion:(id /* block */)a6;
+ (void)_playPlayables:(id)a0 multiviewPlayables:(id)a1 appContext:(id)a2 watchType:(long long)a3 isUpNextPlayback:(BOOL)a4 userPlaybackInitiationDate:(id)a5 openURLCompletionDate:(id)a6 playType:(id)a7 playbackContext:(unsigned long long)a8;
+ (void)_presentPlaybackWithMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 extrasInfo:(id)a2 isCoWatching:(BOOL)a3 watchType:(long long)a4 playType:(id)a5 allowsCellular:(BOOL)a6 previewMetadata:(id)a7 completion:(id /* block */)a8;
+ (void)playMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 watchType:(long long)a2 isRentAndWatchNow:(BOOL)a3;
+ (void)playMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 watchType:(long long)a2 isRentAndWatchNow:(BOOL)a3 completion:(id /* block */)a4;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (id)initWithMPMediaItem:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (id)initWithSidebandAdamID:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (id)initWithVideosPlayables:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end

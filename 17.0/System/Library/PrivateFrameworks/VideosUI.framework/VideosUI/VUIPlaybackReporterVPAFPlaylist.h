@class NSArray, NSString, NSObject;
@protocol TVPPlayback;

@interface VUIPlaybackReporterVPAFPlaylist : NSObject <JEMediaPlaylist>

@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *eventData;
@property (nonatomic) BOOL isLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

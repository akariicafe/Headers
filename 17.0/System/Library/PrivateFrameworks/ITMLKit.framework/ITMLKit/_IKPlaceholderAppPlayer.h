@class NSDate, NSString, NSArray, IKAppDocument, IKAppPlayerBridge, NSMutableDictionary, NSDictionary, NSNumber;
@protocol IKAppPlaylist, IKAppMediaItem;

@interface _IKPlaceholderAppPlayer : NSObject <IKAppPlayer> {
    NSMutableDictionary *_eventExtraInfoByEvent;
}

@property (readonly, nonatomic) IKAppPlayerBridge *bridge;
@property (readonly, nonatomic) long long state;
@property (retain, nonatomic) id<IKAppPlaylist> playlist;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (readonly, nonatomic) id<IKAppMediaItem> currentMediaItem;
@property (readonly, nonatomic) double scanRate;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL showsResumeMenu;
@property (readonly, nonatomic) id<IKAppMediaItem> nextMediaItem;
@property (readonly, nonatomic) id<IKAppMediaItem> previousMediaItem;
@property (retain, nonatomic) IKAppDocument *overlayDocument;
@property (retain, nonatomic) IKAppDocument *interactiveOverlayDocument;
@property (nonatomic) BOOL interactiveOverlayDismissable;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previous;
- (void)play;
- (void)pause;
- (void)present;
- (void)cleanup;
- (void)stop;
- (void)next;
- (void)setElapsedTime:(double)a0;
- (void).cxx_destruct;
- (void)scan:(double)a0;
- (void)changeToMediaAtIndex:(long long)a0;
- (void)startObservingEvent:(id)a0 extraInfo:(id)a1;
- (void)stopObservingEvent:(id)a0;
- (void)transferValuesToAppPlayer:(id)a0;

@end

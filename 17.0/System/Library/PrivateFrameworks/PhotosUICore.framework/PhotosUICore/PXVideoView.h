@class NSString, ISWrappedAVPlayer, ISAVPlayerLayer;
@protocol PXVideoViewDelegate;

@interface PXVideoView : UIView {
    ISWrappedAVPlayer *_player;
    struct { BOOL readinessDidChange; } _delegateRespondsTo;
}

@property (copy, nonatomic) NSString *kvoProxyIdentifier;
@property (weak, nonatomic) id<PXVideoViewDelegate> delegate;
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (readonly, nonatomic) ISAVPlayerLayer *playerLayer;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) BOOL videoIsReadyForDisplay;
@property (nonatomic) BOOL toneMapToStandardDynamicRange;

+ (Class)layerClass;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_layerReadyForDisplayDidChange;

@end

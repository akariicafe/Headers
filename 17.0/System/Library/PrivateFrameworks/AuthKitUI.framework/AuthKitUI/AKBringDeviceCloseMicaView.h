@class CALayer, AKUIMicaPlayer, NSString;

@interface AKBringDeviceCloseMicaView : UIView <AKUIMicaPlayerDelegate>

@property (retain, nonatomic) AKUIMicaPlayer *micaPlayer;
@property (retain, nonatomic) CALayer *dotCloudLayer;
@property (nonatomic) BOOL didBeginShowingDotCloud;
@property (nonatomic) BOOL shouldshowDotCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)AKUIMicaPlayerDidChangePlaybackTime:(id)a0;
- (BOOL)arePhonesApart;
- (BOOL)arePhonesTogather;
- (void)loadMicaFile;

@end

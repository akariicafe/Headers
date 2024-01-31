@class AKUIMicaPlayer;

@interface AKAppleLogoMicaView : UIView

@property (retain, nonatomic) AKUIMicaPlayer *micaPlayer;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadMicaFile;

@end

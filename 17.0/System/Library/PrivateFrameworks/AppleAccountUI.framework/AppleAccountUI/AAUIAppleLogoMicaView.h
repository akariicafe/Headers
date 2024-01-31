@class AAUIMicaPlayer;

@interface AAUIAppleLogoMicaView : UIView

@property (retain, nonatomic) AAUIMicaPlayer *micaPlayer;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadMicaFile;

@end

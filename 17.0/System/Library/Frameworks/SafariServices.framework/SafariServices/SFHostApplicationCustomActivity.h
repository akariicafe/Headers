@class SFCustomActivityProxy;

@interface SFHostApplicationCustomActivity : _SFActivity

@property (readonly, nonatomic) SFCustomActivityProxy *activityProxy;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithActivityProxy:(id)a0;

@end

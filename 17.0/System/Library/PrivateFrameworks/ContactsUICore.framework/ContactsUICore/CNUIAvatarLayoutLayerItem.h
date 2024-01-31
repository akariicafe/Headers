@class CALayer;
@protocol CNCancelable;

@interface CNUIAvatarLayoutLayerItem : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<CNCancelable> avatarImageRendererToken;

- (void)resetToken;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;

@end

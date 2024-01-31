@class CNAvatarImageRenderer;
@protocol CNKeyDescriptor;

@interface SFUIAvatarImageRenderer : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *imageRenderer;
@property (readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

+ (id)avatarImageRender;

- (id)init;
- (void).cxx_destruct;
- (id)avatarImageForContacts:(id)a0 scope:(id)a1;
- (id)avatarImageForContacts:(id)a0;
- (id)avatarImageForContacts:(id)a0 pointSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 rightToLeft:(BOOL)a3 style:(unsigned long long)a4 backgroundStyle:(unsigned long long)a5;
- (id)placeholderImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end

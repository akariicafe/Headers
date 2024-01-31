@protocol CNAvatarImageRenderingScope;

@interface SFUIAvatarImageRenderingScope : NSObject

@property (retain, nonatomic) id<CNAvatarImageRenderingScope> scope;

+ (id)scopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rightToLeft:(BOOL)a2 style:(unsigned long long)a3 backgroundStyle:(unsigned long long)a4;

- (void).cxx_destruct;

@end

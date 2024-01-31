@class UIButton;

@interface PRTitleAlignmentBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) UIButton *button;
@property (readonly, nonatomic) unsigned long long titleAlignment;

+ (id)defaultImage;
+ (id)buttonConfigurationForTitleAlignment:(unsigned long long)a0;

- (void)setTitleAlignment:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)toggle;
- (id)initWithTitleAlignment:(unsigned long long)a0 target:(id)a1 action:(SEL)a2;

@end

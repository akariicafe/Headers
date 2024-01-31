@class NSString, UIColor, UIView;

@interface PRXFeatureIcon : NSObject

@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) UIView *imageView;
@property (nonatomic) double platterCornerRadius;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) double platterSize;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageView:(id)a0;
- (id)initWithSystemImageNamed:(id)a0;
- (id)makeImageView;

@end

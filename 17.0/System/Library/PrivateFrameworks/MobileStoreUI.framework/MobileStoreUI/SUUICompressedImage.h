@class UIColor;

@interface SUUICompressedImage : UIImage

@property (nonatomic) long long cornerType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

- (id)description;
- (void).cxx_destruct;

@end

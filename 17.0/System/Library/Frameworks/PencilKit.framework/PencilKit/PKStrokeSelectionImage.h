@class UIImage, PKStrokeSelectionImageConfig;

@interface PKStrokeSelectionImage : NSObject <NSCopying>

@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *combinedImage;
@property (readonly, nonatomic) PKStrokeSelectionImageConfig *config;
@property (readonly, nonatomic) PKStrokeSelectionImageConfig *fullSizeConfig;
@property (retain, nonatomic) UIImage *addImage;
@property (retain, nonatomic) UIImage *mulImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 config:(id)a1 fullSizeConfig:(id)a2;

@end

@class UIImage, UIColor;

@interface _UICollectionViewOutlineCellDisclosureConfiguration : NSObject <NSCopying> {
    id /* block */ _disclosureWasTappedHandler;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long alignment;
@property (nonatomic) double animationRotationAngle;
@property (retain, nonatomic) UIColor *disclosureColor;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 alignment:(long long)a1;
- (id)initWithImage:(id)a0 alignment:(long long)a1 animationRotationAngle:(double)a2 disclosureColor:(id)a3 disclosureWasTappedHandler:(id /* block */)a4;

@end

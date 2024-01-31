@class UIColor, NSString, UISwitch, UIImage, UIView;

@interface PRXFeature : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) UISwitch *switchControl;
@property (readonly, nonatomic) UIView *imageView;
@property (nonatomic) double imageViewSize;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIColor *tintColor;
@property (nonatomic, getter=isOn) BOOL on;

+ (id)featureWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
+ (id)featureWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 tintColor:(id)a3;
+ (id)optionalFeatureWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 tintColor:(id)a3 valueChangedBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 tintColor:(id)a3 valueChangedBlock:(id /* block */)a4;
- (id)initWithTitle:(id)a0 detailText:(id)a1 imageView:(id)a2 valueChangedBlock:(id /* block */)a3;

@end

@class NSString;

@interface PUAnimatableBarButtonItem : UIBarButtonItem {
    void /* unknown type, empty encoding */ currentButton;
    void /* unknown type, empty encoding */ animationButton;
    void /* unknown type, empty encoding */ currentImageName;
    void /* unknown type, empty encoding */ propertyAnimator;
}

@property (nonatomic, copy) NSString *currentImageName;

+ (id)barButtonItemWithSystemImageName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1 for:(unsigned long long)a2;
- (void)setImageNamed:(id)a0 animation:(long long)a1;

@end

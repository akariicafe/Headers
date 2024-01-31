@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {
    UIImage *m_image;
    int m_type;
}

@property (readonly, nonatomic) SEL action;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)buttonDescriptionWithImage:(id)a0 action:(SEL)a1 type:(int)a2;
+ (id)buttonDescriptionWithTitle:(id)a0 action:(SEL)a1 type:(int)a2;
+ (id)buttonDescriptionWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 type:(int)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 orImage:(id)a1 action:(SEL)a2 type:(int)a3;
- (id)materializeButtonInView:(id)a0 visualStyle:(id)a1;

@end

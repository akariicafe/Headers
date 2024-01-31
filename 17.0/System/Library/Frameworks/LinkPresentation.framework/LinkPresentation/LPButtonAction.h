@class NSString, LPImage;

@interface LPButtonAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *visibleTitle;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *visibleImage;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHeader) BOOL header;

+ (id)actionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end

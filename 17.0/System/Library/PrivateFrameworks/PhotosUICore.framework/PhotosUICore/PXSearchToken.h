@class NSString, UIImage, UISearchToken, NSAttributedString, PXSearchTokenRepresentedObject;

@interface PXSearchToken : NSObject

@property (retain, nonatomic) UISearchToken *searchObject;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) PXSearchTokenRepresentedObject *representedObject;

- (void).cxx_destruct;
- (id)textValue;
- (id)initWithAttributedText:(id)a0 searchObject:(id)a1 representedObject:(id)a2;
- (id)initWithText:(id)a0 image:(id)a1 representedObject:(id)a2;
- (id)initWithText:(id)a0 searchObject:(id)a1 representedObject:(id)a2;

@end

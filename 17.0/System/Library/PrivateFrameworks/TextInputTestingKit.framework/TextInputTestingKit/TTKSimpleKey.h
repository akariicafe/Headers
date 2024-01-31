@class NSString;

@interface TTKSimpleKey : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) short keyCode;

- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithString:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 keyCode:(short)a2;
- (id)toJsonDictionary;

@end

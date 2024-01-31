@interface SKUIStorePageItemPinningLayoutInformation : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } availablePinningFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutAttributesFrame;
@property (nonatomic) double afterPinningLocationYAdditions;
@property (nonatomic) double beforePinningLocationYAdditions;

@end

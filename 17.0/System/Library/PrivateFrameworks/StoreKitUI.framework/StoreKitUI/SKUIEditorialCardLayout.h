@class NSMutableArray, SKUILockupViewElement;

@interface SKUIEditorialCardLayout : NSObject

@property (readonly, nonatomic) NSMutableArray *allLockups;
@property (readonly, nonatomic) SKUILockupViewElement *primaryLockup;
@property (readonly, nonatomic) struct CGSize { double width; double height; } primaryLockupSize;
@property (readonly, nonatomic) double secondaryLockupWidth;

- (void).cxx_destruct;
- (id)initWithCard:(id)a0 width:(double)a1 context:(id)a2;

@end

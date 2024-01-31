@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject

@property (nonatomic) TSWPRep *target;
@property (nonatomic) struct CGPoint { double x; double y; } magnificationPoint;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) BOOL animated;

@end

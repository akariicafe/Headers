@class NSUUID;

@interface SRHMediaView : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } position;

- (id)init;
- (void)dealloc;
- (id)description;

@end

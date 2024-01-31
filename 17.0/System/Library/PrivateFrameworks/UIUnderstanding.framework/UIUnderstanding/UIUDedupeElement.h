@class DedupeElementCompat;

@interface UIUDedupeElement : NSObject

@property (readonly) DedupeElementCompat *underlyingObject;
@property (nonatomic) BOOL isDuplicate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (void).cxx_destruct;
- (id)initWithContents:(id)a0;

@end

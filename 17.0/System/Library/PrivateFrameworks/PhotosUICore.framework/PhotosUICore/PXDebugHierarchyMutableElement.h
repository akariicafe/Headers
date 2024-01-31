@class NSString;

@interface PXDebugHierarchyMutableElement : NSObject <PXDebugHierarchyElement, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double zPosition;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGImage { } *previewImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (retain, nonatomic) NSString *contentsGravity;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL canHaveChildren;
@property (nonatomic) unsigned long long parentIdentifier;
@property (readonly, nonatomic) unsigned long long identifier;

- (id)init;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

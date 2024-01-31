@class NSMapTable;

@interface _UIContextMenuLayoutArbiterOutput : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; struct CAPoint3D { double x; double y; double z; } center; struct CGPoint { double x; double y; } anchorPoint; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double alpha; } preview;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; struct CAPoint3D { double x; double y; double z; } center; struct CGPoint { double x; double y; } anchorPoint; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double alpha; } menu;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } anchor;
@property (retain, nonatomic) NSMapTable *accessoryPositions;

- (void).cxx_destruct;

@end

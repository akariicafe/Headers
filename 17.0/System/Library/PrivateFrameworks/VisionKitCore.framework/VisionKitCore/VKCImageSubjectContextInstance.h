@class UIBezierPath;

@interface VKCImageSubjectContextInstance : NSObject

@property (nonatomic) struct CGImage { } *orientedMaskImage;
@property (nonatomic) struct CGImage { } *maskImage;
@property (copy, nonatomic) UIBezierPath *baseNormalizedSubjectPath;
@property (copy, nonatomic) UIBezierPath *baseTopLevelNormalizedSubjectPath;
@property (retain, nonatomic) UIBezierPath *cachedNormalizedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedNormalizedPathContentsRect;
@property (retain, nonatomic) UIBezierPath *cachedTopLevelNormalizedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedTopLevelNormalizedPathContentsRect;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned long long madIndex;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)normalizedSubjectPathWithContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topLevelOnly:(BOOL)a1;

@end

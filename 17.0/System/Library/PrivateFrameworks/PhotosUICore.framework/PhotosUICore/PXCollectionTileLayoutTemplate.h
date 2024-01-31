@interface PXCollectionTileLayoutTemplate : PXLayoutTemplate

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleSubtitleRect;

- (void)prepare;

@end

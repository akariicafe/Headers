@class NSString, NUISizeCache;

@interface TLKGridImageItem : TLKArrangementItem <TLKGridArrangementItem>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } columnRange;
@property (nonatomic) unsigned long long row;
@property (nonatomic) double horizontalHuggingPriority;
@property (nonatomic) double horizontalCompressionResistance;
@property (retain, nonatomic) NUISizeCache *sizeCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForTargetSize:(struct CGSize { double x0; double x1; })a0;

@end

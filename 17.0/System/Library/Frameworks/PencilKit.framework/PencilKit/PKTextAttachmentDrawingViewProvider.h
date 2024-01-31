@protocol NSTextLocation;

@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;

+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;
+ (BOOL)isSystemNoteTakingEnabled;
+ (void)registerViewProviderClassIfNecessary;
+ (Class)tiledViewClassForDrawingClass:(Class)a0;

- (id)location;
- (void)loadView;
- (void).cxx_destruct;
- (void)setLocation:(id)a0;

@end

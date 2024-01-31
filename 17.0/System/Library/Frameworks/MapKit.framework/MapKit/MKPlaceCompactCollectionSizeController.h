@class NSString;

@interface MKPlaceCompactCollectionSizeController : NSObject <MKCompactCollectionsSizeProvider>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) long long context;
@property (nonatomic) struct { long long displayStyle; long long collectionsPerRow; } configuration;
@property (nonatomic) double defaultCompactCollectionHeight;
@property (nonatomic) double defaultCompactCollectionWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)minimumInterItemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;
- (id)initWithCollectionsConfiguration:(struct { long long x0; long long x1; })a0 usingTraitCollections:(id)a1 inContext:(long long)a2;
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)a0 inContext:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForCollectionWithMaxCollectionsWidth:(double)a0;

@end

@class NSArray;
@protocol PXStoryStyleDescriptor;

@interface PXStoryStyleSelectionDataSource : NSObject

@property (readonly, copy, nonatomic) NSArray *styleInfos;
@property (readonly, nonatomic) long long numberOfStyles;
@property (readonly, nonatomic) long long indexOfCurrentStyle;
@property (readonly, nonatomic) long long indexOfCustomStyle;
@property (readonly, nonatomic) id<PXStoryStyleDescriptor> styleInfoForCurrentStyle;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)infosForStylesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithStyleInfos:(id)a0 indexOfCurrentStyle:(long long)a1 indexOfCustomStyle:(long long)a2;
- (id)songForStyleAtIndex:(long long)a0;
- (id)styleInfoAtIndex:(long long)a0;

@end

@class TDLayerStackRenditionSpec, NSMutableArray;

@interface _TDLayerStackFilterHelper : NSObject

@property (retain, nonatomic) TDLayerStackRenditionSpec *layerStackRendition;
@property (retain, nonatomic) NSMutableArray *excludedIdioms;
@property (retain, nonatomic) NSMutableArray *excludedSubtypes;
@property (retain, nonatomic) NSMutableArray *excludedScaleFactors;
@property (retain, nonatomic) NSMutableArray *excludedHorizontalSizeClasses;
@property (retain, nonatomic) NSMutableArray *excludedVerticalSizeClasses;
@property (retain, nonatomic) NSMutableArray *excludedDirections;
@property (retain, nonatomic) NSMutableArray *excludedLayers;
@property (retain, nonatomic) NSMutableArray *excludedPresentationStates;
@property (retain, nonatomic) NSMutableArray *excludedSizes;
@property (retain, nonatomic) NSMutableArray *excludedStates;
@property (retain, nonatomic) NSMutableArray *excludedValues;

- (id)init;
- (void)dealloc;
- (BOOL)allowKey:(id)a0;
- (void)establishExclusionsWithHelper:(id)a0 idioms:(id)a1 sizeClasses:(id)a2;

@end

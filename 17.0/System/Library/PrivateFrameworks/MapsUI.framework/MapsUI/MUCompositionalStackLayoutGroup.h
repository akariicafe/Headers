@class NSString, MUCompositionalStackLayoutGroupInternal, NSArray;

@interface MUCompositionalStackLayoutGroup : NSObject <NSCopying>

@property (retain, nonatomic) MUCompositionalStackLayoutGroupInternal *internal;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) BOOL distributionBoundsContent;
@property (nonatomic) float distributionFittingSizePriority;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL alignmentBoundsContent;
@property (nonatomic) float alignmentFittingSizePriority;
@property (nonatomic) double spacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (copy, nonatomic) NSArray *arrangedLayoutItems;

- (void)setAlignmentBoundsContent:(BOOL)a0 forArrangedLayoutItem:(id)a1;
- (struct UIOffset { double x0; double x1; })offsetForArrangedLayoutItem:(id)a0;
- (void)removeArrangedLayoutItem:(id)a0;
- (void)setAlignmentFittingSizePriority:(float)a0 forArrangedLayoutItem:(id)a1;
- (void)setAlignment:(long long)a0 forArrangedLayoutItem:(id)a1;
- (void)disableAlignmentForArrangedLayoutItem:(id)a0;
- (BOOL)alignmentBoundsContentForArrangedLayoutItem:(id)a0;
- (void)resetAlignmentForArrangedLayoutItem:(id)a0;
- (void)addArrangedLayoutItem:(id)a0;
- (BOOL)hasAlignmentForArrangedLayoutItem:(id)a0;
- (void)setPadding:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 forArrangedLayoutItem:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })paddingForArrangedLayoutItem:(id)a0;
- (void)setOffset:(struct UIOffset { double x0; double x1; })a0 forArrangedLayoutItem:(id)a1;
- (long long)alignmentForArrangedLayoutItem:(id)a0;
- (id)initWithAxis:(long long)a0;
- (id)initWithIdentifier:(id)a0 axis:(long long)a1;
- (float)alignmentFittingSizePriorityForArrangedLayoutItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

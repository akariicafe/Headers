@class NSString;
@protocol PXStoryCompanionColorEffect, PXStoryColorGradingRepository, PXStoryTimeline;

@interface PXStoryConcreteCompanionTimeline : NSObject <PXStoryCompanionTimeline>

@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) long long colorGradeKind;
@property (readonly, nonatomic) id<PXStoryColorGradingRepository> colorGradingRepository;
@property (readonly, nonatomic) long long numberOfSegments;
@property (readonly, nonatomic) id<PXStoryCompanionColorEffect> colorGradingEffect;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)init;
- (void).cxx_destruct;
- (id)segmentAtIndex:(long long)a0;
- (id)initWithTimeline:(id)a0 colorGradeKind:(long long)a1 colorGradingRepository:(id)a2;

@end

@class NSSet, NSString, CRNormalizedQuad, CHEncodedStrokeIdentifier;

@interface CHStrokeGroup : NSObject <NSSecureCoding, CRDirectionalRegion> {
    struct CGSize { double width; double height; } _normalizedSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long uniqueIdentifier;
@property (readonly, nonatomic) long long ancestorIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } firstStrokeOrigin;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } averageWritingOrientation;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *firstStrokeIdentifier;
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *lastStrokeIdentifier;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) double groupingConfidence;
@property (readonly, nonatomic) NSString *strategyIdentifier;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isStrokeGroupSet:(id)a0 equivalentToStrokeGroupSet:(id)a1;
+ (id)strokeGroupContainingStrokeIdentifier:(id)a0 strokeGroups:(id)a1;
+ (id)strokeGroupContainingStrokeIdentifier:(id)a0 strokeGroups:(id)a1 foundStrokeGroupIndex:(long long *)a2;
+ (id)strokeGroupsClusteredByProximity:(id)a0;
+ (id)strokeIdentifierToGroupIndexMappingForStrokeIdentifiers:(id)a0 orderedStrokeGroups:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)groupByAddingStrokeIdentifiers:(id)a0 removingStrokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 classification:(long long)a5 groupingConfidence:(double)a6 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a7;
- (id)initWithAncestorIdentifier:(long long)a0 strokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 classification:(long long)a5 groupingConfidence:(double)a6 strategyIdentifier:(id)a7 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a8;
- (id)initWithStrokeIdentifiers:(id)a0 firstStrokeIdentifier:(id)a1 lastStrokeIdentifier:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 classification:(long long)a4 groupingConfidence:(double)a5 strategyIdentifier:(id)a6 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a7;
- (id)initWithUniqueIdentifier:(long long)a0 ancestorIdentifier:(long long)a1 strokeIdentifiers:(id)a2 firstStrokeIdentifier:(id)a3 lastStrokeIdentifier:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 classification:(long long)a6 groupingConfidence:(double)a7 strategyIdentifier:(id)a8 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a9;
- (BOOL)isEquivalentToStrokeGroup:(id)a0;
- (struct CGPath { } *)newEstimatedBaselineForStrokesWithTokens:(id)a0 tokenStrokeIdentifiers:(id)a1;
- (struct CGSize { double x0; double x1; })normalizedSize;
- (void)setNormalizedSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateStrategyIdentifier:(id)a0 classification:(long long)a1;

@end

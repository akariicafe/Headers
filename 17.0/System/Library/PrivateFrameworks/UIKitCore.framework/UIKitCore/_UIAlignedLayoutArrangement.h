@class NSSet, NSString, NSMutableDictionary;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {
    NSMutableDictionary *_alignmentConstraints;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_configurationHistoryClass;

- (id)initWithItems:(id)a0;
- (void)dealloc;
- (void)_addIndividualConstraintsIfPossible;
- (id)_alignmentConfigurationHistory;
- (void)_addConstraintGroupsAsNecessary;
- (BOOL)_wantsConstraintsForAttribute:(long long)a0;
- (long long)_axisForSpanningLayoutGuide;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)a0;
- (BOOL)_usesCenteringConnectionConstraint;
- (void)_updateArrangementConstraints;
- (void)_clearAllConstraintsArrays;
- (void)_setUpConstraintForItem:(id)a0 referenceItem:(id)a1 attribute:(long long)a2 inConstraintsTable:(id)a3;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)a0;
- (void)_updateConfigurationHistory;
- (void).cxx_destruct;
- (void)_removeIndividualConstraintsAsNecessary;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (BOOL)_hasStaleConfiguration;
- (id)_alignmentPropertySource;
- (id)_baselineDependentConstraints;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (id)_identifierForSpanningLayoutGuide;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)a0;
- (long long)_attributeForConstraintGroupName:(id)a0;
- (void)_removeConstraintGroupsAsNecessary;

@end

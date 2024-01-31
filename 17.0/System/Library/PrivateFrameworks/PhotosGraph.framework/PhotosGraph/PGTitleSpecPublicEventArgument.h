@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL shouldUseLongPublicEventTitle;

+ (id)_cleanUpEventName:(id)a0;
+ (id)argumentWithPublicEventType:(unsigned long long)a0;
+ (id)argumentWithPublicEventType:(unsigned long long)a0 shouldUseLongPublicEventTitle:(BOOL)a1;

- (id)_commonPublicEventNodeForMomentNodes:(id)a0;
- (id)_generateTitleWithBusinessNameForPublicEventNode:(id)a0;
- (id)_generateTitleWithCategoryNameForPublicEventNode:(id)a0;
- (id)_generateTitleWithEventNameForPublicEventNode:(id)a0;
- (id)_generateTitleWithPerformerNamesForPublicEventNode:(id)a0;
- (id)_resolvedStringWithMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)_resolvedStringWithMomentNodes:(id)a0 features:(id)a1 argumentEvaluationContext:(id)a2;
- (id)_resolvedStringWithPublicEventNode:(id)a0 inMomentNodes:(id)a1;
- (id)initWithPublicEventType:(unsigned long long)a0;
- (id)initWithPublicEventType:(unsigned long long)a0 shouldUseLongPublicEventTitle:(BOOL)a1;

@end

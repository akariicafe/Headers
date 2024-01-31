@class NSArray, NSString;

@interface WFModuleSummaryTemplateBuilder : NSObject

@property (retain, nonatomic) NSArray *formatItems;
@property (copy, nonatomic) NSArray *parameterKeys;
@property (readonly, copy, nonatomic) NSString *formatString;

+ (BOOL)formatString:(id)a0 containsParameterKey:(id)a1;
+ (id)slotsForMultipleParameterState:(id)a0 inParameter:(id)a1;

- (void).cxx_destruct;
- (id)buildContentWithParameters:(id)a0 editableParameters:(id)a1 parameterStates:(id)a2 variableBeingEdited:(id)a3;
- (id)contentByEnumeratingSummaryWithParameterSlotBuilder:(id /* block */)a0;
- (id)initWithFormatString:(id)a0;
- (void)itemizeFormatStringIfNeeded;

@end

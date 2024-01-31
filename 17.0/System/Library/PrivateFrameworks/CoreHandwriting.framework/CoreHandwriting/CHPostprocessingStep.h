@interface CHPostprocessingStep : NSObject

@property (readonly) BOOL modifiesOriginalTokens;

+ (BOOL)shouldAdjustColumnsFromPostprocessingStepOptions:(id)a0;

- (id)process:(id)a0 options:(id)a1;

@end

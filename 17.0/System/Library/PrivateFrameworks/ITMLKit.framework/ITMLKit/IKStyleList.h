@class NSArray, IKViewElementStyle, NSString;

@interface IKStyleList : NSObject

@property (readonly, retain, nonatomic) IKStyleList *baseStyleList;
@property (readonly, copy, nonatomic) NSArray *styles;
@property (readonly, nonatomic) BOOL requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle *resolvedStyle;
@property (nonatomic, getter=isResolutionDone) BOOL resolutionDone;
@property (readonly, copy, nonatomic) NSString *classSelector;

- (void).cxx_destruct;
- (void)_resolveWithMediaQueryEvaluator:(id)a0;
- (id)initWithClassSelector:(id)a0 styles:(id)a1 baseStyleList:(id)a2;
- (id)resolvedStyleWithMediaQueryEvaluator:(id)a0;
- (void)setNeedsReresolution;

@end

@interface ICNAReferringInboundURLFilter : NSObject

+ (id)allowedTieredPrefixReplacements;
+ (id)filterURLByLogicalReplacements:(id)a0;
+ (id)filterReferringInboundURL:(id)a0;
+ (id)filterStringByAllowedTieredPrefixReplacements:(id)a0;
+ (BOOL)foundMatchingPrefixAmongCandidates:(id)a0 forInputString:(id)a1 matchingPrefixInplaceResult:(id *)a2;

@end

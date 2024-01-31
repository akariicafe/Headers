@interface SSFindMyResultBuilder : SSContactResultBuilder

+ (id)bundleId;

- (id)resultIdentifier;
- (id)buildInlineCard;
- (id)buildCompactCard;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildResult;
- (id)fmfPunchoutURL;

@end

@interface CKDModifyBadgeURLRequest : CKDURLRequest

@property (readonly, nonatomic) unsigned long long badgeValue;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 badgeValue:(unsigned long long)a1;

@end

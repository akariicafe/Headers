@interface DDAddressAction : DDAction

+ (BOOL)actionAvailableForContact:(id)a0;
+ (id)actionWithURL:(id)a0 result:(struct __DDResult { } *)a1 enclosingResult:(struct __DDResult { } *)a2 context:(id)a3;

- (id)iconName;
- (id)variantIconName;

@end

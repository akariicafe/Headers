@class INIntentSlotDescription, INIntent, INExtensionContextSlotResolutionResult, NSString, NSArray;

@interface INIntentTestResolvedParameter : NSObject

@property (readonly, nonatomic) INExtensionContextSlotResolutionResult *extensionContextResolutionResult;
@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentSlotDescription *slotDescription;
@property (readonly, copy, nonatomic) NSString *parameter;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) BOOL resolveImplemented;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithParameter:(id)a0 forIntent:(id)a1 extensionContextResolutionResult:(id)a2;

@end

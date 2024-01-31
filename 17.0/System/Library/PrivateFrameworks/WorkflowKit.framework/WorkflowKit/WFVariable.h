@class NSOrderedSet, NSString, NSDictionary, NSHashTable, NSSet, NSArray, WFIcon;
@protocol WFVariableProvider;

@interface WFVariable : NSObject <WFVariableStringContent, NSCopying, WFVariableSerialization>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) NSString *nameIncludingPropertyName;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSSet *requiredAccessResources;
@property (readonly, nonatomic) NSArray *aggrandizements;
@property (readonly, nonatomic) BOOL supportsAggrandizements;
@property (readonly, nonatomic) BOOL requiresModernVariableSupport;
@property (readonly, nonatomic) NSString *defaultName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRenamed) BOOL renamed;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSOrderedSet *possibleContentClasses;
@property (readonly, nonatomic) NSOrderedSet *possibleAggrandizedContentClasses;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)variableUpdated;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getContentWithContext:(id)a0 trackContentAttribution:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getFileRepresentationWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getObjectRepresentationForClass:(Class)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)possibleAggrandizedContentClassesWithContext:(id)a0;
- (id)possibleContentClassesWithContext:(id)a0;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)variableBySettingAggrandizements:(id)a0;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;
- (void)variableProvider:(id)a0 variableWasMoved:(id)a1;
- (void)variableProviderDidInvalidateOutputDetails:(id)a0;
- (void)wf_getContentItemsWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)wf_lengthInVariableString;

@end

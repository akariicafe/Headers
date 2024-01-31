@class NSArray, NSString;

@interface WFTableTemplateParameterState : NSObject <WFParameterState> {
    BOOL _requiresBoundedDate;
}

@property (readonly, nonatomic) long long compoundType;
@property (readonly, copy, nonatomic) NSArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)actualCopyWithZone:(struct _NSZone { } *)a0;
- (id)containedVariables;
- (id)initWithCompoundType:(long long)a0 rows:(id)a1;
- (id)initWithCompoundType:(long long)a0 rows:(id)a1 requiresBoundedDate:(BOOL)a2;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2 contentItemClass:(Class)a3;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2 contentItemClass:(Class)a3 linkValueTypes:(id)a4;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)stateByAddingRow:(id)a0;
- (id)stateByInsertingRow:(id)a0 atIndex:(unsigned long long)a1;
- (id)stateByRemovingRowAtIndex:(unsigned long long)a0;
- (id)stateByReplacingRowAtIndex:(unsigned long long)a0 withState:(id)a1;
- (id)stateBySettingCompoundType:(long long)a0;

@end

@class NSString, NSMutableArray;

@interface CNVCardLine : NSObject <CNVCardParameterLine>

@property (readonly) NSString *name;
@property (readonly) id value;
@property (readonly) NSMutableArray *parameters;
@property (readonly) NSString *groupingName;
@property (readonly) NSMutableArray *groupedLines;
@property (readonly) NSString *itemSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lineWithLiteralValue:(id)a0;
+ (id)lineWithName:(id)a0 value:(id)a1;
+ (id)lineWithName:(id)a0 value:(id)a1 itemSeparator:(id)a2;
+ (id)versionPlaceholderLine;

- (void).cxx_destruct;
- (void)addGroupedLine:(id)a0 withCounter:(long long *)a1;
- (void)addParameterWithName:(id)a0 value:(id)a1;
- (BOOL)canSerializeWithStrategy:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1 itemSeparator:(id)a2;
- (void)insertParameterWithName:(id)a0 value:(id)a1 atIndex:(unsigned long long)a2;
- (id)makeGroupingNameWithCounter:(long long *)a0;
- (void)serializeValueWithStrategy:(id)a0;
- (void)serializeWithStrategy:(id)a0;

@end

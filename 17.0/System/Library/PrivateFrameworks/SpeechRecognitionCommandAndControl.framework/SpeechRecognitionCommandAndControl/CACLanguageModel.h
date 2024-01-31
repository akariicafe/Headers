@class NSString, NSMutableDictionary, NSMutableArray;

@interface CACLanguageModel : NSObject <NSCopying>

@property (retain) NSString *identifier;
@property (retain) NSString *text;
@property (readonly) NSMutableDictionary *attributes;
@property (readonly) NSMutableArray *children;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_mutableAttributes;
- (id)_mutableChildren;
- (void)removeAllChildren;
- (id)_initWithLanguageModel:(id)a0;
- (void)addChildLanguageModel:(id)a0;
- (struct __RXLanguageObject { } *)createRXLanguageObjectRef;
- (id)initWithText:(id)a0 identifier:(id)a1 attributes:(id)a2;
- (void)logTreeDescriptionWithLevel:(int)a0;
- (id)objectForAttribute:(id)a0;
- (void)setObject:(id)a0 forAttribute:(id)a1;

@end

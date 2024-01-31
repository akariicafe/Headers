@class NSString, NSMutableDictionary;

@interface FilterElementDefinition : NSObject {
    NSString *_rootName;
    unsigned long long _rule;
    unsigned long long _mask;
    unsigned long long _subRule;
    unsigned long long _subMask;
    int _subAuxValueCount;
    BOOL _hasAuxValue;
    unsigned long long _auxValue;
    NSMutableDictionary *_setOfMatches;
    NSString *_namedLink;
    FilterElementDefinition *_wildCard;
    FilterElementDefinition *_superWildCard;
}

- (void)dealloc;
- (void)addRuleField:(int)a0 value:(int)a1 hasAuxValue:(BOOL)a2 auxValue:(unsigned long long)a3 inside:(BOOL)a4 forPathComponents:(id)a5 permitLink:(BOOL)a6 componentIndex:(int)a7 parentElement:(id)a8 copyParentWildcardLink:(BOOL)a9;
- (void)dump:(int)a0;
- (void)dumpAttributesInto:(char *)a0 forLevel:(int)a1;
- (struct { unsigned int x0; unsigned char x1; })encodeInto:(struct _MDPlistContainer { } *)a0 auxArray:(id)a1 namedRootMap:(id)a2;
- (id)initAsRoot:(id)a0;
- (BOOL)isBottomValue;

@end

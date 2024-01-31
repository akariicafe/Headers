@class NSString, NSArray, NSMutableDictionary;

@interface PSIObject : NSObject <NSCopying> {
    NSMutableDictionary *_synonymsByOriginalWord;
    NSMutableDictionary *_synonymsByOriginalLookupIdentifier;
}

@property (copy, nonatomic, setter=setUUID:) NSString *uuid;
@property (readonly, nonatomic) NSArray *tokens;

- (id)initWithUUID:(id)a0;
- (void)clear;
- (void)reverse;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initForCopy:(BOOL)a0;
- (void)addContentString:(id)a0 category:(short)a1 owningCategory:(short)a2;
- (void)addContentString:(id)a0 identifier:(id)a1 category:(short)a2 owningCategory:(short)a3;
- (void)addIdentifier:(id)a0 category:(short)a1 owningCategory:(short)a2;
- (void)addSynonym:(id)a0 category:(short)a1 originalContentString:(id)a2;
- (void)addSynonym:(id)a0 lookupIdentifier:(id)a1 category:(short)a2 originalContentString:(id)a3;
- (void)enumerateSynonymsForOriginalContentString:(id)a0 orOriginalLookupIdentifier:(id)a1 handler:(id /* block */)a2;
- (id)initForReverse;

@end

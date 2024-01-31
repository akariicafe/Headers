@class NSArray;

@interface _UISupplementalLexicon : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned long long searchPrefixes;

- (id)initWithItems:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRTISupplementalLexicon:(id)a0;
- (id)initWithItems:(id)a0 searchPrefixes:(unsigned long long)a1;
- (id)initWithItems:(id)a0 searchPrefixes:(unsigned long long)a1 andTISupplementalLexicon:(id)a2;

@end

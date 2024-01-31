@class NSArray, NSSet, NSMutableDictionary;

@interface _EMSearchableIndexPendingRemovals : NSObject <NSCopying> {
    NSMutableDictionary *_reasonsByIdentifier;
}

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSArray *purgedIdentifiers;
@property (readonly, nonatomic) NSArray *deletedIdentifiers;
@property (copy, nonatomic) NSSet *purgeReasons;
@property (copy, nonatomic) NSSet *exclusionReasons;

- (void)addIdentifiers:(id)a0 withReasons:(id)a1;
- (void)removeAllIdentifiers;
- (void)removeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPurgeReasons:(id)a0 exclusionReasons:(id)a1;
- (id)_identifiersPassingReasonsTest:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

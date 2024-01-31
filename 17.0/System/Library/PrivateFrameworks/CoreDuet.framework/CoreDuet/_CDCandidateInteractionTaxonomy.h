@interface _CDCandidateInteractionTaxonomy : NSObject <NSCopying> {
    long long _direction;
    long long _mechanism;
}

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@interface TSKSelection : NSObject <NSCopying>

+ (Class)archivedSelectionClass;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUIDDescription;
- (id)archivedSelectionWithContext:(id)a0;

@end

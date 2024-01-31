@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (unsigned long long)changeCount;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end

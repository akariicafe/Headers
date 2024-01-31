@class NSSet;

@interface PHPersistentObjectChangeDetails : NSObject

@property (readonly, nonatomic) long long objectType;
@property (readonly, nonatomic) NSSet *insertedLocalIdentifiers;
@property (readonly, nonatomic) NSSet *updatedLocalIdentifiers;
@property (readonly, nonatomic) NSSet *deletedLocalIdentifiers;

- (void).cxx_destruct;
- (id)initWithObjectType:(long long)a0 insertedIdentifiers:(id)a1 updatedIdentifiers:(id)a2 deletedIdentifiers:(id)a3;

@end

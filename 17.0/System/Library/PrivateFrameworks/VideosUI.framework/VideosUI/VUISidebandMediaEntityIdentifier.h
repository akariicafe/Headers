@class NSString, VUIMediaEntityType, NSManagedObjectID;

@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>

@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithManagedObjectID:(id)a0 mediaEntityType:(id)a1;

@end

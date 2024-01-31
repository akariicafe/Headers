@class NSString, VUIMediaEntityType;

@interface VUIFamilySharingMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>

@property (retain, nonatomic) NSString *objectIdentifier;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntityIdentifier:(id)a0 mediaEntityType:(id)a1;

@end

@class NSString;

@interface WFDeletionAuthorizationState : NSObject <WFSerializableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *status;
@property (readonly, copy, nonatomic) NSString *contentItemClassName;
@property (readonly, copy, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deniedPermissionsErrorForContentItemClass:(Class)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)stateFromDatabaseData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)databaseDataWithError:(id *)a0;
- (id)deniedPermissionsError;
- (id)initWithStatus:(id)a0 contentItemClassName:(id)a1 actionUUID:(id)a2 count:(unsigned long long)a3;
- (id)localizedExfiltrationRestrictedError;
- (id)siriActionToolDescription;
- (id)stateWithStatus:(id)a0 count:(unsigned long long)a1;

@end

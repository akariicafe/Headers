@class NSUUID, NSString, NSDate;

@interface PRChildPosterAttribute : NSObject <PRPosterRoleAttribute>

@property (readonly, copy, nonatomic) NSUUID *childPosterUUID;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *attributeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeObjectWithJSON:(id)a0;

- (id)encodeJSON;
- (void).cxx_destruct;
- (id)initWithChildPosterUUID:(id)a0 dateCreated:(id)a1 providerIdentifier:(id)a2;

@end

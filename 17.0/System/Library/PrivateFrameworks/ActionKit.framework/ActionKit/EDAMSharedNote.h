@class NSNumber, EDAMIdentity;

@interface EDAMSharedNote : FATObject

@property (retain, nonatomic) NSNumber *sharerUserID;
@property (retain, nonatomic) EDAMIdentity *recipientIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceCreated;
@property (retain, nonatomic) NSNumber *serviceUpdated;
@property (retain, nonatomic) NSNumber *serviceAssigned;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

@class NSString, NSSet, NSArray, NSNumber;

@interface IDSFamilyMember : NSObject

@property (readonly, nonatomic) long long relationship;
@property (readonly, nonatomic) NSNumber *DSID;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSSet *handles;
@property (readonly, nonatomic) NSArray *devices;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithiCloudID:(id)a0 appleID:(id)a1 handles:(id)a2 devices:(id)a3;

@end

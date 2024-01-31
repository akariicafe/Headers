@class NSArray;

@interface PKSharingMesageProprietaryData : NSObject

@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (nonatomic) long long accessType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end

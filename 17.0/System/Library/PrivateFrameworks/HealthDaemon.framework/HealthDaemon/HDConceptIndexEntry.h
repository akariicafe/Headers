@class NSUUID, NSString, HKOntologyVersion;

@interface HDConceptIndexEntry : NSObject

@property (readonly, copy, nonatomic) NSUUID *sampleUUID;
@property (readonly, nonatomic) long long conceptIdentifier;
@property (readonly, nonatomic) long long conceptVersion;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long compoundIndex;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) HKOntologyVersion *ontologyVersion;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSampleUUID:(id)a0 conceptIdentifier:(long long)a1 conceptVersion:(long long)a2 keyPath:(id)a3 compoundIndex:(unsigned long long)a4 type:(unsigned long long)a5 ontologyVersion:(id)a6;

@end

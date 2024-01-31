@class NSUUID, NSData, NSDictionary;

@interface AFMyriadSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, copy, nonatomic) NSUUID *sessionId;
@property (readonly, copy, nonatomic) NSUUID *currentElectionAdvertisementId;
@property (readonly, copy, nonatomic) NSData *currentElectionAdvertisementData;
@property (readonly, copy, nonatomic) NSDictionary *electionAdvertisementDataByIds;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGeneration:(unsigned long long)a0 sessionId:(id)a1 currentElectionAdvertisementId:(id)a2 currentElectionAdvertisementData:(id)a3 electionAdvertisementDataByIds:(id)a4;

@end

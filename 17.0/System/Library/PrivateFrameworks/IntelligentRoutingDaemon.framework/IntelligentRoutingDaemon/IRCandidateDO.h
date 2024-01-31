@class NSString, NSSet, NSDate;

@interface IRCandidateDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastSeenDate;
@property (readonly, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSString *candidateIdentifier;
@property (readonly, nonatomic) NSSet *nodes;

+ (id)candidateDOFromCandidate:(id)a0;
+ (id)candidateDOWithLastSeenDate:(id)a0 lastUsedDate:(id)a1 candidateIdentifier:(id)a2 nodes:(id)a3;
+ (id)candidateFromCandidateDO:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isMac;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementCandidateIdentifier:(id)a0;
- (id)copyWithReplacementLastSeenDate:(id)a0;
- (id)copyWithReplacementLastUsedDate:(id)a0;
- (id)copyWithReplacementNodes:(id)a0;
- (id)exportAsDictionary;
- (id)initWithLastSeenDate:(id)a0 lastUsedDate:(id)a1 candidateIdentifier:(id)a2 nodes:(id)a3;
- (BOOL)isEqualToCandidateDO:(id)a0;
- (BOOL)isEverBeenUsedWithMediaHistoryEventsAsc:(id)a0;
- (BOOL)isFirstPartyDevice;
- (BOOL)isSameICloudWithSystemState:(id)a0;
- (BOOL)isSameWiFi;
- (BOOL)isValidForPrediction;

@end

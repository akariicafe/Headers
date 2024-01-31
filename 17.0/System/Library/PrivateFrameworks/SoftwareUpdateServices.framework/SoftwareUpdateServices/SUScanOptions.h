@class NSString, NSMutableSet;

@interface SUScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *types;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, getter=isForced) BOOL forced;
@property (retain, nonatomic) NSString *requestedPMV;
@property (retain, nonatomic) NSString *requestedBuild;
@property (nonatomic) BOOL ignoreNoUpdateFoundResult;
@property (nonatomic) BOOL MDMUseDelayPeriod;
@property (nonatomic) BOOL MDMShowRapidSecurityResponse;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *clientName;
@property (nonatomic) unsigned long long scanType;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearTypes;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addType:(int)a0;
- (BOOL)containsType:(int)a0;
- (BOOL)isSplatOnlyScan;
- (BOOL)findsAnyUpdate;
- (void)removeType:(int)a0;

@end

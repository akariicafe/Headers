@class NSString, NSData, NSArray;

@interface FudPersonalizationRequest : NSObject <NSSecureCoding> {
    BOOL _cproSet;
    BOOL _csecSet;
    BOOL _cepoSet;
    BOOL _useSSOCredentials;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestName;
@property (retain, nonatomic) NSString *requestPrefix;
@property (nonatomic) int responseFormat;
@property (nonatomic) unsigned int boardID;
@property (nonatomic) unsigned int chipID;
@property (nonatomic) unsigned long long ecID;
@property (retain, nonatomic) NSData *extEcID;
@property (nonatomic) BOOL globalSigning;
@property (nonatomic) unsigned int securityDomain;
@property (nonatomic) BOOL productionMode;
@property (nonatomic) BOOL securityMode;
@property (retain, nonatomic) NSData *nonceHash;
@property (nonatomic) unsigned int chipEpoch;
@property (nonatomic) BOOL enableMixMatch;
@property (retain, nonatomic) NSArray *objectList;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) unsigned short responseAlignment;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isChipEpochSet;
- (BOOL)isProductionModeSet;
- (BOOL)isSecurityModeSet;
- (void)setUseSSOCredentials:(BOOL)a0;
- (BOOL)useSSOCredentials;

@end

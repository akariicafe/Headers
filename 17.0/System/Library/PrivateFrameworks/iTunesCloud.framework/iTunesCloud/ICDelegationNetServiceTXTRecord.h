@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long serviceVersion;
@property (readonly, copy, nonatomic) NSData *TXTRecordData;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTXTRecordData:(id)a0;

@end

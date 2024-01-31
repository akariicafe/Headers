@interface CDPEscrowRecordViability : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasMachineId;
@property (readonly, nonatomic) BOOL hasRecords;
@property (readonly, nonatomic) unsigned long long recordViability;
@property (readonly, nonatomic) unsigned long long tlkRecoveryViability;
@property (readonly, nonatomic) unsigned long long pcsRecoveryViability;
@property (readonly, nonatomic) unsigned long long sosViability;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordPresence:(BOOL)a0 hasMachineId:(BOOL)a1 recordViability:(unsigned long long)a2 tlkRecoveryViability:(unsigned long long)a3 sosViability:(unsigned long long)a4 pcsRecoveryViability:(unsigned long long)a5;

@end

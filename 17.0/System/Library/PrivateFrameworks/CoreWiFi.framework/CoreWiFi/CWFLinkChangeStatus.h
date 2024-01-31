@class NSString, NSDate;

@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic, getter=isLinkDown) BOOL linkDown;
@property (nonatomic, getter=isLinkDownDebounceInProgress) BOOL linkDownDebounceInProgress;
@property (nonatomic, getter=isInvoluntaryLinkDown) BOOL involuntaryLinkDown;
@property (nonatomic) int reason;
@property (nonatomic) long long subreason;
@property (nonatomic) long long RSSI;
@property (nonatomic) long long noise;
@property (nonatomic) unsigned long long CCA;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLinkChangeStatus:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

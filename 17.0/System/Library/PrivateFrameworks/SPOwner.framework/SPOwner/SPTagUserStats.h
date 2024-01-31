@interface SPTagUserStats : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char overflowFlag;
@property (nonatomic) unsigned short crashCount;
@property (nonatomic) unsigned long long multiTime;
@property (nonatomic) unsigned long long nearOwnerTime;
@property (nonatomic) unsigned long long wildTime;
@property (nonatomic) unsigned int ownerPlaySoundCount;
@property (nonatomic) unsigned int ownerPlaySoundTime;
@property (nonatomic) unsigned int rangingCount;
@property (nonatomic) unsigned int rangingTime;
@property (nonatomic) unsigned char version;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

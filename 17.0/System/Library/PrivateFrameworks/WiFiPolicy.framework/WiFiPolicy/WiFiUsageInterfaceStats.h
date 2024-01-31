@class NSDate;

@interface WiFiUsageInterfaceStats : NSObject <NSCopying>

@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long txL3Packets;
@property (nonatomic) unsigned long long rxL3Packets;
@property (copy, nonatomic) NSDate *timestamp;

+ (id)statsForInterfaceName:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

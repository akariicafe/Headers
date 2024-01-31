@class NSString;

@interface PUStorageTipListItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long totalSizeInBytes;
@property (readonly, nonatomic) unsigned long long storageTipType;
@property (readonly, nonatomic) NSString *cloudQuotaBytesUsedIdentifier;

+ (unsigned long long)storageTipTypeForCloudQuotaUsedBytesIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStorageTipType:(unsigned long long)a0 count:(long long)a1 totalSizeInBytes:(long long)a2;

@end

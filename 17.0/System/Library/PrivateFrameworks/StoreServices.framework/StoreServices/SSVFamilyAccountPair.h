@interface SSVFamilyAccountPair : NSObject

@property (readonly, nonatomic) unsigned long long downloaderAccountIdentifier;
@property (readonly, nonatomic) unsigned long long familyIdentifier;
@property (readonly, nonatomic) unsigned long long purchaserAccountIdentifier;

- (id)initWithDownloaderAccountIdentifier:(unsigned long long)a0 purchaserAccountIdentifier:(unsigned long long)a1 familyIdentifier:(unsigned long long)a2;

@end

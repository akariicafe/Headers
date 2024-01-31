@interface AMSFamilyAccountPair : NSObject

@property (readonly, nonatomic) unsigned long long downloaderAccountID;
@property (readonly, nonatomic) unsigned long long familyID;
@property (readonly, nonatomic) unsigned long long purchaserAccountID;

- (id)initWithDownloaderAccountID:(unsigned long long)a0 purchaserAccountID:(unsigned long long)a1 familyID:(unsigned long long)a2;

@end

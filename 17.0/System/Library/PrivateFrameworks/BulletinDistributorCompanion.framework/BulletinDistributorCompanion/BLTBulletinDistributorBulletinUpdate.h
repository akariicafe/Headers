@class BBBulletin;

@interface BLTBulletinDistributorBulletinUpdate : NSObject

@property (nonatomic) unsigned long long updateType;
@property (retain, nonatomic) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feed;

+ (id)bulletinUpdateWithType:(unsigned long long)a0 bulletin:(id)a1 feed:(unsigned long long)a2;

- (void).cxx_destruct;

@end

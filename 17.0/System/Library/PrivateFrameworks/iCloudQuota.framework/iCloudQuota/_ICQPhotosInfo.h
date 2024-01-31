@interface _ICQPhotosInfo : NSObject

@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;

+ (void)getInfoWithCompletion:(id /* block */)a0;
+ (id)mockCount:(id)a0;

@end

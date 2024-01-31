@interface MKStorage : NSObject

@property (nonatomic) unsigned long long availableSpaceInBytes;
@property (nonatomic) unsigned long long availableSpaceInMegabytes;
@property (nonatomic) unsigned long long availableSpaceInGigabytes;
@property (nonatomic) unsigned long long availableSpaceInTerabytes;

- (id)init;

@end

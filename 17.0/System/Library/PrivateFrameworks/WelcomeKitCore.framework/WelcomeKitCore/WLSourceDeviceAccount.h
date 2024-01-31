@class NSString;

@interface WLSourceDeviceAccount : NSObject

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *identifier;

+ (BOOL)accountInfoArrayContainsNonSyncableAccount:(id)a0;
+ (BOOL)accountInfoRepresentsSyncableAccount:(id)a0;
+ (id)accountWithInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;

@end

@class NSUUID, NSString, HDXPCPeriodicActivity, NSDate, HKCloudSyncRequest;

@interface HDCloudSyncContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long reason;
@property (copy, nonatomic) HKCloudSyncRequest *syncRequest;
@property (readonly, nonatomic) HDXPCPeriodicActivity *periodicActivity;
@property (copy, nonatomic) NSDate *unitTest_syncDateOverride;

+ (id)contextForFastPush;

- (id)init;
- (id)description;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForPurpose:(long long)a0 options:(unsigned long long)a1 reason:(long long)a2 periodicActivity:(id)a3;
- (BOOL)isFastPushOrPull;
- (id)subContextByAddingOptions:(unsigned long long)a0;
- (id)subContextByRemovingOptions:(unsigned long long)a0;

@end

@class NSString, PSIDate, NSDate;

@interface PSICollectionResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) PSIDate *startDate;
@property (readonly, nonatomic) PSIDate *endDate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) unsigned long long assetsCountPrivate;
@property (readonly, nonatomic) unsigned long long assetsCountShared;
@property (readonly, copy, nonatomic) NSString *keyAssetUUIDPrivate;
@property (readonly, copy, nonatomic) NSString *keyAssetUUIDShared;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 subtitle:(id)a4 keyAssetUUIDPrivate:(id)a5 keyAssetUUIDShared:(id)a6 type:(unsigned long long)a7 assetsCountPrivate:(unsigned long long)a8 assetsCountShared:(unsigned long long)a9 sortDate:(id)a10;

@end

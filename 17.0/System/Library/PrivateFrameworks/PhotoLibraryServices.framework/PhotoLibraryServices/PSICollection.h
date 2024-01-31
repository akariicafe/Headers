@class NSString, PSIAsset, PSIDate, NSDate;

@interface PSICollection : PSIObject <NSCopying>

@property (readonly) PSIDate *startDate;
@property (readonly) PSIDate *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long type;
@property (readonly) NSDate *sortDate;
@property (readonly) unsigned long long assetsCountPrivate;
@property (readonly) unsigned long long assetsCountShared;
@property (copy, nonatomic) PSIAsset *keyAssetPrivate;
@property (copy, nonatomic) PSIAsset *keyAssetShared;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initForCopy:(BOOL)a0;
- (id)initWithUUID:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 subtitle:(id)a4 keyAssetPrivate:(id)a5 keyAssetShared:(id)a6 type:(unsigned long long)a7 assetsCountPrivate:(unsigned long long)a8 assetsCountShared:(unsigned long long)a9 sortDate:(id)a10;

@end

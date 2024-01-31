@class BMUserActivityMetadataEvent;

@interface CKContextUserFacingUniversalRecent : NSObject <NSCopying>

@property (retain, nonatomic) BMUserActivityMetadataEvent *event;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

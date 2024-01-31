@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {
    NSDictionary *_suspensionInfoDictionary;
}

@property (readonly, nonatomic, getter=isiCloudSuspended) BOOL iCloudSuspended;
@property (readonly, nonatomic, getter=isFamilySuspended) BOOL familySuspended;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSDictionary, NSNumber;

@interface HMHAPMetadata : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSDictionary *hapChrMap;
@property (retain, nonatomic) NSDictionary *hapSvcMap;
@property (retain, nonatomic) NSDictionary *hapCategoryMap;
@property (retain) NSNumber *version;

+ (id)getSharedInstance;
+ (id)encodeProtobufWithVersion:(id)a0 characteristics:(id)a1 services:(id)a2 categories:(id)a3;

- (BOOL)applyProtoBufData:(id)a0;
- (id)categoryForIdentifier:(id)a0;
- (BOOL)shouldNotCacheCharacteristicOfType:(id)a0;
- (id)characteristicTypeDescription:(id)a0;
- (id)categoryForCategoryUUIDString:(id)a0;
- (id)serviceTypeDescription:(id)a0;
- (void).cxx_destruct;

@end

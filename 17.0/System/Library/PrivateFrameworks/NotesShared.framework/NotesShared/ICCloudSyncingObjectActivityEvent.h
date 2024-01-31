@class NSData, NSString;

@interface ICCloudSyncingObjectActivityEvent : NSObject <ICCRCoding, ICCRDataType>

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *fallbackData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithICCRCoder;

- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithData:(id)a0 fallbackData:(id)a1;
- (id)initWithICCRCoder:(id)a0;

@end

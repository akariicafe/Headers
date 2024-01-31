@class NSData;

@interface CKDAnonymousZoneDataObject : NSObject

@property (readonly, copy, nonatomic) NSData *encryptedTupleData;
@property (readonly, nonatomic) int changeType;
@property (readonly, nonatomic) int deleteType;

- (void).cxx_destruct;
- (id)initWithEncryptedData:(id)a0;
- (id)initWithEncryptedData:(id)a0 changeType:(int)a1 deleteType:(int)a2;

@end

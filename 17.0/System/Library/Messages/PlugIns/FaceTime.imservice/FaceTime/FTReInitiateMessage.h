@class NSArray, NSDictionary, NSData, NSNumber;

@interface FTReInitiateMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *selfBlob;
@property (copy) NSData *selfPushToken;
@property (copy) NSNumber *selfNATType;
@property (copy) NSData *selfNatIP;
@property (copy) NSDictionary *regionInformation;
@property (copy) NSArray *peers;
@property (copy) NSArray *canonicalizedPeers;

- (id)init;
- (void)dealloc;
- (id)bagKey;
- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end

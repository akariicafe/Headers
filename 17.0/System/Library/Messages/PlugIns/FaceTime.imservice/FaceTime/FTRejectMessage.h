@class NSData, NSString, NSNumber;

@interface FTRejectMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *peerPushToken;
@property (copy) NSData *selfPushToken;
@property (copy) NSString *peerID;
@property (copy) NSNumber *reason;

- (void)dealloc;
- (id)bagKey;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end

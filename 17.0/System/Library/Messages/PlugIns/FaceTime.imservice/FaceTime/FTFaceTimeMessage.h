@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying>

@property (copy) NSData *sessionToken;

- (id)init;
- (void)dealloc;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)isValidMessage;

@end

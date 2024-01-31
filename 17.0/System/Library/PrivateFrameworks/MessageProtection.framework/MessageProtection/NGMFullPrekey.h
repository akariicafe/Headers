@class DHKey, NGMECDHPublicPreKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMECDHPublicPreKey *publicPrekey;

+ (id)fullPrekeyForTestingSignedBy:(id)a0;

- (BOOL)delete;
- (id)description;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (id)pbDevicePrekey;
- (void).cxx_destruct;
- (id)initWithPBPrekey:(id)a0 verifySignedBy:(id)a1 error:(id *)a2;
- (id)ecdhKeyCTKObject;

@end

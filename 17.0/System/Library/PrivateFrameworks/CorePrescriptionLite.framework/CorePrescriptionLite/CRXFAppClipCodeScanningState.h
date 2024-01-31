@class CRXFAppClipCodeTranscoder, CRXFAppClipCode, NSData, NSObject;
@protocol OS_os_log;

@interface CRXFAppClipCodeScanningState : NSObject {
    NSObject<OS_os_log> *_log;
    CRXFAppClipCodeTranscoder *_transcoder;
}

@property (readonly, nonatomic) CRXFAppClipCode *leftAppClipCode;
@property (readonly, nonatomic) NSData *leftAppClipCodePayload;
@property (readonly, nonatomic) CRXFAppClipCode *rightAppClipCode;
@property (readonly, nonatomic) NSData *rightAppClipCodePayload;
@property (readonly, nonatomic) CRXFAppClipCode *dualAppClipCode;
@property (readonly, nonatomic) NSData *dualAppClipCodePayload;
@property (nonatomic) BOOL allowUnsupportedRX;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) unsigned long long lensType;

- (id)init;
- (void)reset;
- (id)asDictionary;
- (void).cxx_destruct;
- (BOOL)updateWithScannedAppClipCodePayload:(id)a0 error:(id *)a1;

@end

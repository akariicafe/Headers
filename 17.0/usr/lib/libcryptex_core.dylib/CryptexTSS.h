@class NSString, NSDictionary, NSData, NSError, NSObject;
@protocol OS_os_log, OS_xpc_object, OS_dispatch_queue, OS_cryptex_signature;

@interface CryptexTSS : NSObject

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSError *nserr;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (readonly, nonatomic) NSString *tssUsage;
@property (retain, nonatomic) NSString *tssURL;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *tss_request;
@property (retain, nonatomic) NSDictionary *response;
@property (retain, nonatomic) NSObject<OS_cryptex_signature> *tssp_sign;
@property (retain, nonatomic) NSObject<OS_xpc_object> *im4m_array;
@property (retain, nonatomic) NSData *c411_content;

- (id)initWithFlags:(unsigned long long)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)setURL:(id)a0;
- (void)tssStampRequest;
- (id)generateDiavloRequest:(id)a0;
- (id)generatePackedSignatures;
- (BOOL)isSSOAvailable;
- (void)setInfoData:(id)a0;
- (void)setManifestArray:(id)a0;
- (id)tssFormatRequest:(id)a0 withHeaders:(id)a1 withURL:(id)a2;
- (id)tssFormatResponse:(id)a0 withHeaderData:(id)a1 withCode:(long long)a2;
- (int)tssSendRequest;
- (id)tssSerializeRequest;
- (void)tssSubmit;

@end

@class NSString, _TtC10CoreIDVPAD30PADInternalAuditDataRepository;

@interface _PADAuditDataRepository : NSObject <PADAuditDataRepository> {
    _TtC10CoreIDVPAD30PADInternalAuditDataRepository *_auditDataRepository;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)storeClassifierResult:(id)a0 imageData:(id)a1 signature:(id)a2 flags:(id)a3;
- (void)storeUnencryptedVideoFrom:(id)a0;
- (void)storeFACPoseBuffer:(struct __CVBuffer { } *)a0 identifier:(id)a1 values:(id)a2;
- (void)storePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (void)storeTAValues:(id)a0;

@end

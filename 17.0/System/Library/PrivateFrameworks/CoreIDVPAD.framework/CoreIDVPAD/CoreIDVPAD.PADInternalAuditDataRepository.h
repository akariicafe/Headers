@interface CoreIDVPAD.PADInternalAuditDataRepository : NSObject {
    void /* unknown type, empty encoding */ dataRecorder;
}

- (id)init;
- (void).cxx_destruct;
- (void)storeUnencryptedVideoFrom:(id)a0;
- (void)storeClassifierResult:(id)a0 imageData:(id)a1;
- (void)storeFACPoseBuffer:(struct __CVBuffer { } *)a0 identifier:(id)a1 values:(id)a2;
- (void)storePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (void)storeTAValues:(id)a0;

@end

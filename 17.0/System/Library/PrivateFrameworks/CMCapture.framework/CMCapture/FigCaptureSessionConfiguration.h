@class NSArray, NSString, NSObject, NSMutableArray;
@protocol OS_tcc_identity;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSMutableArray *_connections;
}

@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) BOOL usesAppAudioSession;
@property (nonatomic) BOOL configuresAppAudioSession;
@property (nonatomic) BOOL allowedToRunInMultitaskingMode;
@property (nonatomic, getter=isMultiCamSession) BOOL multiCamSession;
@property (nonatomic) BOOL xctestAuthorizedToStealDevice;
@property (nonatomic) BOOL continuityCameraIsWired;
@property (nonatomic) int continuityCameraClientDeviceClass;
@property (nonatomic) BOOL suppressVideoEffects;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *tccIdentity;
@property (nonatomic) BOOL checkIfFileAlreadyExistForMFO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)removeConnectionConfiguration:(id)a0;
- (void)addConnectionConfiguration:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

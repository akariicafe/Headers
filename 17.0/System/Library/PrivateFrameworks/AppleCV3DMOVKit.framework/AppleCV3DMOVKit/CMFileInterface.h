@class CMDataContainer;

@interface CMFileInterface : NSObject {
    CMDataContainer *_cmDataContainer;
}

+ (void)updateCV3DVersion:(id)a0 container:(id)a1;
+ (void)updateCVPlayerVersion:(id)a0 container:(id)a1;
+ (void)updateSessionID:(id)a0 container:(id)a1;
+ (BOOL)writeContainerToFileURL:(id)a0 container:(id)a1;

- (id)sessionID;
- (id)version;
- (id)iOSVersion;
- (void).cxx_destruct;
- (id)deviceString;
- (void)processCMData:(id)a0;
- (id)cvPlayerVersion;
- (id)cv3dVersion;
- (id)grabNextEvent;
- (id)grabNextRecvData;
- (id)grabNextRecvMessage;
- (id)grabNextSentData;
- (id)grabNextSentMessage;
- (id)initReaderWithFileURL:(id)a0;
- (id)initWriter;
- (id)macOSVersion;
- (void)processCMData:(id)a0 sending:(BOOL)a1;
- (void)resetReader;
- (BOOL)saveToFileURL:(id)a0;
- (void)updateCV3DVersion:(id)a0;
- (void)updateCVPlayerVersion:(id)a0;
- (void)updateSessionID:(id)a0;

@end

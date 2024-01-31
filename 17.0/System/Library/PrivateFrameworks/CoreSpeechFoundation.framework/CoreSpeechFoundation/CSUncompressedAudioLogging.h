@class NSString, NSFileHandle, NSObject;
@protocol OS_dispatch_queue;

@interface CSUncompressedAudioLogging : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *dictationInteractionId;
@property (retain, nonatomic) NSString *asrId;
@property (nonatomic) BOOL isSamplingForDictation;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *task;
@property (retain, nonatomic) NSString *samplingDate;
@property (retain, nonatomic) NSString *samplingTimestamp;
@property (retain, nonatomic) NSString *samplingTimestampDetail;
@property (retain, nonatomic) NSString *samplingDirectory;
@property (retain, nonatomic) NSString *audioFilePath;
@property (retain, nonatomic) NSString *plistFilePath;
@property (retain, nonatomic) NSFileHandle *audioFileHandle;
@property (retain, nonatomic) NSString *tmpDirectory;
@property (retain, nonatomic) NSString *tmpAudioFilePath;
@property (nonatomic) BOOL isCancelled;

+ (int)loggingFileProtectionClass;

- (void).cxx_destruct;
- (void)prepareLogging:(id /* block */)a0;
- (BOOL)_setupFilePath:(id *)a0;
- (int)_createFileDescriptor:(id)a0 protectionClass:(int)a1;
- (BOOL)_moveAudioLoggingToCollectionDirectory:(id *)a0;
- (BOOL)_prepareFileForLogging:(id *)a0;
- (void)_removeTmpAudioFile;
- (BOOL)_writePlistFile:(id *)a0;
- (void)appendAudioData:(id)a0;
- (void)cancelAudioLogging;
- (void)endAudioWithCancellation:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithDictationInteractionId:(id)a0 asrId:(id)a1 languageCode:(id)a2 task:(id)a3;
- (id)initWithDictationInteractionId:(id)a0 languageCode:(id)a1 task:(id)a2;
- (id)initWithRequestId:(id)a0 asrId:(id)a1 dictationInteractionId:(id)a2 languageCode:(id)a3 task:(id)a4 isSamplingForDictation:(BOOL)a5;
- (id)initWithRequestId:(id)a0 asrId:(id)a1 languageCode:(id)a2 task:(id)a3;
- (id)initWithRequestId:(id)a0 languageCode:(id)a1 task:(id)a2;
- (id)samplingString;

@end

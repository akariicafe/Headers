@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface AFUIDebugLogManager : NSObject

@property (readonly, nonatomic, getter=_queue) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic, getter=_baseLogDirectoryURL) NSURL *baseLogDirectoryURL;
@property (readonly, copy, nonatomic, getter=_siriLogDirectoryURL) NSURL *siriLogDirectoryURL;

+ (int)executeSystemCommand:(id)a0 stdoutTo:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_contentsOfDirectoryAtURL:(id)a0 matchingPattern:(id)a1 includingPropertiesForKeys:(id)a2 error:(id *)a3;
- (id)_contentsOfDirectoryAtURL:(id)a0 matchingPattern:(id)a1 sortedByDateWithResourceKey:(id)a2 error:(id *)a3;
- (id)_archiveLogDirectoryAtURL:(id)a0 name:(id)a1 error:(id *)a2;
- (void)_captureFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)_captureLogsAtURL:(id)a0 logName:(id)a1 sinceTime:(double)a2 completion:(id /* block */)a3;
- (void)_captureLogsAtURL:(id)a0 logName:(id)a1 sinceTime:(double)a2 pattern:(id)a3 mimeType:(id)a4 completion:(id /* block */)a5;
- (id)_captureLogsInDirectoryAtURL:(id)a0 matchingPattern:(id)a1 withMimeType:(id)a2 attemptCompression:(BOOL)a3 limit:(long long)a4 error:(id *)a5;
- (id)_siriCardLogDirectoryURL;
- (id)_uniqueTemporaryFileURL;
- (void)captureCardLogsSinceTime:(double)a0 completion:(id /* block */)a1;
- (void)capturePreviousConversationWithCompletion:(id /* block */)a0;
- (void)captureSiriSpeechLogsWithCompletion:(id /* block */)a0;
- (void)captureSiriTTSAudioWithCompletion:(id /* block */)a0;
- (void)captureSiriVoiceTriggerLogsWithCompletion:(id /* block */)a0;
- (void)captureViewHierarchyLogWithDefaultViewHierarchy:(id)a0 completion:(id /* block */)a1;

@end

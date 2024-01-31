@class NSString, NSArray, NSURL, AVWeakReferencingDelegateStorage;

@interface AVCaptureFileOutputDelegateWrapper : NSObject

@property (readonly) long long settingsID;
@property (readonly) NSURL *outputFileURL;
@property (retain) NSString *outputFileType;
@property (retain) NSArray *metadata;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) NSArray *connections;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic, getter=isPaused) BOOL paused;

+ (id)wrapperWithURL:(id)a0 delegate:(id)a1 settingsID:(long long)a2 connections:(id)a3;

- (void)dealloc;
- (id)initWithURL:(id)a0 delegate:(id)a1 settingsID:(long long)a2 connections:(id)a3;

@end

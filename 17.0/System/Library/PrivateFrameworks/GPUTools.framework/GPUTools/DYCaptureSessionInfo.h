@class DYDeviceInfo, NSString, NSDictionary, NSArray;

@interface DYCaptureSessionInfo : NSObject {
    NSDictionary *_libraryLinkTimeVersions;
    NSDictionary *_queueLabels;
    NSDictionary *_threadLabels;
    NSString *_patchVersion;
    struct DYInterposeVersion { int version; char *patch; } _version;
}

@property (readonly, retain, nonatomic) DYDeviceInfo *deviceInfo;
@property (readonly, retain, nonatomic) DYDeviceInfo *controlDeviceInfo;
@property (nonatomic) struct DYInterposeVersion { int x0; char *x1; } *interposerVersion;
@property (readonly, nonatomic) unsigned int nativePointerSize;
@property (readonly, nonatomic) unsigned long long capturedFramesCount;
@property (readonly, nonatomic) BOOL guestAppWasLinkedOnApexOrLater;
@property (readonly, retain, nonatomic) NSDictionary *guestAppInfoPlist;
@property (readonly, retain, nonatomic) NSDictionary *launchDictionary;
@property (readonly, retain, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, retain, nonatomic) NSString *guestAppTitle;
@property (readonly, retain, nonatomic) NSString *guestAppBundleIdentifier;
@property (readonly, retain, nonatomic) NSString *guestAppPath;
@property (readonly, retain, nonatomic) NSString *guestAppCurrentDirectory;
@property (readonly, retain, nonatomic) NSArray *guestAppArguments;
@property (readonly, retain, nonatomic) NSDictionary *guestAppEnvironment;
@property (readonly, nonatomic) unsigned int triggerFrame;
@property (readonly, nonatomic) unsigned int frameLimit;
@property (readonly, nonatomic) BOOL triggerOnNextGraphicsCommand;
@property (readonly, nonatomic) BOOL lockGraphicsAfterCompletion;
@property (readonly, nonatomic) BOOL harvestStateAtEnd;
@property (readonly, nonatomic) BOOL suspendAfterCompletion;
@property (readonly, nonatomic) unsigned int isBoundaryLess;
@property (readonly, nonatomic) unsigned int graphicsApi;

+ (unsigned int)graphicsAPIOfCaptureStore:(id)a0;
+ (int)platformOfCaptureStore:(id)a0;
+ (id)symbolicatorSignatureFromCaptureStore:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)a0 limitBackwardsCompatibility:(BOOL)a1 isInternal:(BOOL)a2;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)a0 limitBackwardsCompatibility:(BOOL)a1 isInternal:(BOOL)a2 withBlock:(id /* block */)a3;
- (id)initWithCaptureStore:(id)a0;
- (BOOL)_isBackwardsCompatible:(id)a0 isInternal:(BOOL)a1;
- (id)labelForQueueID:(unsigned long long)a0;
- (id)labelForThreadID:(unsigned long long)a0;
- (int)linkTimeVersionForLibrary:(id)a0;

@end

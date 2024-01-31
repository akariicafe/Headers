@class NSString;

@interface FigScreenCaptureConfiguration : NSObject {
    struct __CFDictionary { } *_fvdOptions;
    struct OpaqueFigSimpleMutex { } *_lock;
    unsigned long long _preset;
}

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameInterval;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long preset;
@property (nonatomic) long long numOfIdleFrames;
@property (nonatomic) long long imagePoolSize;
@property (nonatomic) NSString *clientName;
@property (nonatomic) id contentIDs;
@property (nonatomic) BOOL includePrivateContent;

- (id)init;
- (void)dealloc;
- (id)description;
- (struct OpaqueFigSimpleMutex { } *)getLock;
- (struct __CFDictionary { } *)getFVDOptions;

@end

@class NSString;

@interface FigDisplayConfiguration : NSObject {
    struct __CFDictionary { } *_fvdOptions;
    struct OpaqueFigSimpleMutex { } *_lock;
    unsigned long long _preset;
}

@property (nonatomic) struct CGSize { double x0; double x1; } maxDisplaySize;
@property (nonatomic) unsigned int refreshRate;
@property (nonatomic) unsigned long long preset;
@property (nonatomic) long long numOfIdleFrames;
@property (nonatomic) long long imagePoolSize;
@property (nonatomic) NSString *clientName;
@property (nonatomic) long long clientPID;

- (id)init;
- (void)dealloc;
- (id)description;
- (struct OpaqueFigSimpleMutex { } *)getLock;
- (struct __CFDictionary { } *)getFVDOptions;

@end

@class NSMutableArray;

@interface VCMediaControlInfoGenerator : NSObject {
    struct __CFDictionary { } *_callbacksDict;
    NSMutableArray *_controlInfoPool;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _controlInfoPoolLock;
    unsigned int _optionBitmap;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _callbackDictLock;
}

@property (readonly) unsigned int type;
@property (readonly) unsigned char version;
@property unsigned char fecFeedbackVersion;

- (void)dealloc;
- (int)deregisterCallbacksWithContext:(void *)a0;
- (int)addMediaControlInfoOption:(unsigned int)a0;
- (unsigned long long)feedbackSize;
- (id)initWithType:(unsigned int)a0 version:(unsigned char)a1;
- (int)registerFillBlobCallback:(void /* function */ *)a0 processBlobCallback:(void /* function */ *)a1 context:(void *)a2;

@end

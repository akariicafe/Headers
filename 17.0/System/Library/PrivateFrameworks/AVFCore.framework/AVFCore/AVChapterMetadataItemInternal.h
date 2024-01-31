@class NSString, AVWeakReference, NSMutableArray, NSObject;
@protocol NSObject, OS_dispatch_queue, NSCopying;

@interface AVChapterMetadataItemInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigAsset { } *figAsset;
    long long chapterGroupIndex;
    long long chapterIndex;
    NSString *chapterType;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    NSString *chapterDataType;
    id<NSObject, NSCopying> value;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
    long long valueStatus;
    int valueErrorCode;
    NSMutableArray *completions;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end

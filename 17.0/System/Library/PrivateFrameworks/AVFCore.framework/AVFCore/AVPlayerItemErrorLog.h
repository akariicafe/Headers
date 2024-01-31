@class NSArray, AVPlayerItemErrorLogInternal;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extendedLogData;
- (id)_common_init;
- (id)_errorLogArray;
- (id)initWithLogArray:(id)a0;

@end

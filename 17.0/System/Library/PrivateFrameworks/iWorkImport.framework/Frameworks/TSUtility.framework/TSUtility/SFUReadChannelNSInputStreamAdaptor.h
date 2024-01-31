@class NSString, NSError;
@protocol SFUInputStream, NSStreamDelegate;

@interface SFUReadChannelNSInputStreamAdaptor : NSInputStream <NSStreamDelegate> {
    id<SFUInputStream> _inputStream;
    id<NSStreamDelegate> _delegate;
    _Atomic unsigned long long _status;
    NSError *_streamError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)delegate;
- (void)open;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithSFUInputStream:(id)a0;

@end

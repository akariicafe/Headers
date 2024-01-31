@class NSString;
@protocol KSWriter;

@interface KSForwardingWriter : NSObject <KSWriter> {
    id<KSWriter> _writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)writeString:(id)a0;
- (id)initWithOutputWriter:(id)a0;

@end

@class NSString;
@protocol MTLBuffer;

@interface MTLBufferRelocation : NSObject <MTLRelocation>

@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSymbolName:(id)a0 buffer:(id)a1 offset:(unsigned long long)a2;

@end

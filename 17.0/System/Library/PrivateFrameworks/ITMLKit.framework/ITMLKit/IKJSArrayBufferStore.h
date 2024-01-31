@class IKAppContext, NSMutableDictionary;

@interface IKJSArrayBufferStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *bufferStorage;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (id)arrayBufferForData:(id)a0;

@end

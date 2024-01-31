@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface MTLConstantRelocation : NSObject <MTLRelocation>

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSymbolName:(id)a0 bytes:(void *)a1 length:(unsigned long long)a2;
- (id)initWithSymbolName:(id)a0 data:(id)a1;

@end

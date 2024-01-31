@class NSString, AFMyriadAdvertisementContext, NSData;

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating> {
    AFMyriadAdvertisementContext *_base;
    unsigned long long _generation;
    NSData *_contextData;
    double _contextFetchDelay;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasContextData : 1; unsigned char hasContextFetchDelay : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeneration:(unsigned long long)a0;
- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (unsigned long long)getGeneration;
- (void)setContextData:(id)a0;
- (id)getContextData;
- (double)getContextFetchDelay;
- (void)setContextFetchDelay:(double)a0;

@end

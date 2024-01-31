@class NSString, AFTestRequestOptions, NSNumber;

@interface _AFTestRequestOptionsMutation : NSObject <AFTestRequestOptionsMutating> {
    AFTestRequestOptions *_base;
    long long _requestPath;
    NSString *_inputOrigin;
    NSNumber *_isEyesFree;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRequestPath : 1; unsigned char hasInputOrigin : 1; unsigned char hasIsEyesFree : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setInputOrigin:(id)a0;
- (void)setRequestPath:(long long)a0;
- (id)getInputOrigin;
- (id)getIsEyesFree;
- (long long)getRequestPath;
- (void)setIsEyesFree:(id)a0;

@end

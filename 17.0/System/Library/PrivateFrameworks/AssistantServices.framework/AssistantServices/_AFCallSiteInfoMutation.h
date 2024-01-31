@class NSString, AFCallSiteInfo;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating> {
    AFCallSiteInfo *_base;
    NSString *_imagePath;
    NSString *_symbolName;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasImagePath : 1; unsigned char hasSymbolName : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (id)getImagePath;
- (BOOL)isDirty;
- (id)getSymbolName;
- (void)setImagePath:(id)a0;
- (void).cxx_destruct;
- (void)setSymbolName:(id)a0;

@end

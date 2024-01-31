@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
    NSString *_MMCSDirPath;
    NSString *_engineDirPath;
}

@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) struct _mmcs_engine { } *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)computeItemIDForAsset:(id)a0;

- (void)abort;
- (void)dealloc;
- (void).cxx_destruct;
- (void)deactivate;
- (int)_getFileDescriptorFromItem:(unsigned long long)a0;
- (void)_getItemDone:(unsigned long long)a0 path:(id)a1 error:(id)a2;
- (id)_getUTIFromItem:(unsigned long long)a0;
- (void)_putItemDone:(unsigned long long)a0 putReceipt:(id)a1 error:(id)a2;
- (void)_requestCompleted;
- (void)deactivateRemoveAllFiles:(BOOL)a0;
- (void)didFinishUsingAssets:(id)a0;
- (id)initWithPersonID:(id)a0 path:(id)a1;

@end

@class NSDictionary;
@protocol CGRemotePDFDocumentProtocol;

@interface CGRemotePDFDocumentProxy : NSObject {
    id<CGRemotePDFDocumentProtocol> _asyncProxy;
    id<CGRemotePDFDocumentProtocol> _syncProxy;
}

@property (readonly) NSDictionary *infoDictionary;
@property (readonly, getter=isUnlocked) BOOL unlocked;
@property (readonly, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long pageCount;

- (void).cxx_destruct;
- (void)getPageAtIndex:(long long)a0 completion:(id /* block */)a1;
- (void)getVersionMajor:(long long *)a0 andMinor:(long long *)a1;
- (id)initWithRemoteDocument:(id)a0;
- (id)pageProxyForRemotePage:(id)a0;
- (id)sync_pageAtIndex:(long long)a0;

@end

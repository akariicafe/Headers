@class BRCItemID, NSString, BRCAppLibrary, BRCServerItem;

@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
    unsigned long long _chainedRecordsCount;
}

@property (readonly, nonatomic) BRCItemID *rootItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)a0;
- (void)_performPCSChainBatch;

@end

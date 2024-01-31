@class NSString, BRCPrivateServerZone;

@interface BRCZonePurgeOperation : _BRCOperation <BRCOperationSubclass> {
    BRCPrivateServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithServerZone:(id)a0;

@end

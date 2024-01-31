@class VCCompanionSyncService, NSString, NSURL;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService>

@property (readonly, weak, nonatomic) VCCompanionSyncService *service;
@property (readonly, nonatomic) long long protocolVersion;
@property (readonly, copy, nonatomic) NSString *syncServiceIdentifier;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSync;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCompanionSyncService:(id)a0 device:(id)a1;
- (void)requestFullResync;

@end

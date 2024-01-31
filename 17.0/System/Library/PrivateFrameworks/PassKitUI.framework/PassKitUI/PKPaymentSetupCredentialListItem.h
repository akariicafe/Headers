@class UIImage, PKPaymentCredential, NSString;

@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <PKPassSnapshotCoordinatableSource, NSCopying>

@property (readonly, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) unsigned long long lastCheckedCredentialHash;
@property (retain, nonatomic) UIImage *passSnapshot;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isUnavailable;
@property (nonatomic) BOOL isRefund;
@property (nonatomic) BOOL isBeingProvisioned;
@property (nonatomic) BOOL isCellDisabled;
@property (nonatomic) BOOL isSnapshotFetchInProgress;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCredential:(id)a0;

@end

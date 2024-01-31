@class UIImage, PKPaymentCredential, NSString;

@interface PKPaymentSetupAssistantCredential : PKPaymentSetupAssistantCoreCredential <PKPassSnapshotCoordinatableSource>

@property (retain, nonatomic) UIImage *passSnapshot;
@property (nonatomic) BOOL isSnapshotFetchInProgress;
@property (readonly, nonatomic) PKPaymentCredential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

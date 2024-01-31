@class HKOrganDonationConnectionManager;

@interface HKOrganDonationConfirmDeleteViewController : HKOrganDonationBaseViewController {
    HKOrganDonationConnectionManager *_connectionManager;
}

- (void).cxx_destruct;
- (id)titleString;
- (id)bodyString;
- (id)titleImage;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (void)deleteButtonTapped:(id)a0;
- (id)initWithConnectionManager:(id)a0 medicalIDData:(id)a1;

@end

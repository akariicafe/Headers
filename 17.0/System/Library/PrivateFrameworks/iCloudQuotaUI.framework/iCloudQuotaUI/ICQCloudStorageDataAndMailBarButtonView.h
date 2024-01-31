@class UILabel;

@interface ICQCloudStorageDataAndMailBarButtonView : UIView {
    UILabel *_data;
    UILabel *_dataSizes;
    UILabel *_mail;
    UILabel *_mailSizes;
}

+ (id)barButtonItemWithData:(id)a0 andMail:(id)a1;

- (void)sizeToFit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithData:(id)a0 andMail:(id)a1;

@end

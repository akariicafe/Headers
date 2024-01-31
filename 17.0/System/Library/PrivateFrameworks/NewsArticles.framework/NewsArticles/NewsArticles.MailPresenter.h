@interface NewsArticles.MailPresenter : NSObject <MFMailComposeViewControllerDelegate, SXMailPresenter> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ viewControllerPresenting;
}

- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canComposeMail;
- (void)presentMail:(id)a0;

@end

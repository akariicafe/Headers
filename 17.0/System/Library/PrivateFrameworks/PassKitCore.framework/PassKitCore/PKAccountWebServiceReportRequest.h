@class NSString, NSURL, PKAccountReport;

@interface PKAccountWebServiceReportRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKAccountReport *report;
@property (nonatomic) unsigned long long trigger;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end

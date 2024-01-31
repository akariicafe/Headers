@class PKAccountExportedTransactionInfo;

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountExportedTransactionInfo *exportedTransactionInfo;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 account:(id)a1 request:(id)a2;

@end

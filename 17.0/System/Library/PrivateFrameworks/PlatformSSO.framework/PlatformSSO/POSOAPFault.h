@class NSString, POSOAPReason, POSOAPCode, POSOAPFaultDetail;

@interface POSOAPFault : NSObject <POXSDefinitionProvider>

@property (retain, nonatomic) POSOAPFaultDetail *detail;
@property (copy, nonatomic) NSString *faultactor;
@property (copy, nonatomic) NSString *faultcode;
@property (copy, nonatomic) NSString *faultstring;
@property (retain, nonatomic) POSOAPCode *Code;
@property (retain, nonatomic) POSOAPReason *Reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end

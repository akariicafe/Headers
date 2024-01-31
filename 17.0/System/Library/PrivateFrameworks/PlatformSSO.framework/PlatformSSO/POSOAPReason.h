@class POSOAPText, NSString;

@interface POSOAPReason : NSObject <POXSDefinitionProvider>

@property (retain, nonatomic) POSOAPText *Text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end

@class NSString, NSError;

@interface WFRemoteExecutionAlertRequestResponse : WFRemoteExecutionRequest

@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSString *selectedButton;
@property (retain, nonatomic) NSError *error;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithSelectedButton:(id)a0 requestIdentifier:(id)a1 error:(id)a2;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end

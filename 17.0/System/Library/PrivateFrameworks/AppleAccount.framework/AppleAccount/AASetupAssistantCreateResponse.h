@class NSNumber, NSString;

@interface AASetupAssistantCreateResponse : AAResponse

@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *HSAAction;
@property (readonly, nonatomic) NSString *HSAData;

- (void).cxx_destruct;

@end

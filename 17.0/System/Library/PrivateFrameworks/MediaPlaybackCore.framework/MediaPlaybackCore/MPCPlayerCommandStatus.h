@class NSString, MPRemoteCommandStatus, MPCPlayerCommandRequest, NSError, MPCPlayerCommandDialog, NSData;

@interface MPCPlayerCommandStatus : NSObject

@property (readonly, nonatomic) MPRemoteCommandStatus *status;
@property (readonly, nonatomic) MPCPlayerCommandRequest *request;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MPCPlayerCommandDialog *dialog;
@property (readonly, nonatomic) NSData *customData;
@property (readonly, nonatomic) NSString *customDataType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMPStatus:(id)a0 request:(id)a1;

@end

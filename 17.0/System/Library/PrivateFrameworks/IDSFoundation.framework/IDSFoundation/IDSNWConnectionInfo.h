@class NSString, NSUUID;

@interface IDSNWConnectionInfo : NSObject

@property (nonatomic) unsigned long long connectionID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isQUICPod;
@property (nonatomic) BOOL isRelay;
@property (nonatomic) BOOL isCellular;
@property (nonatomic) unsigned long long clientUniquePID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSUUID *childConnectionID;
@property (retain, nonatomic) NSString *protocolStackDescription;

- (void).cxx_destruct;

@end

@class CKServerChangeToken;

@interface HMBCloudStateModel : HMBModel

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;

+ (id)hmbProperties;

@end

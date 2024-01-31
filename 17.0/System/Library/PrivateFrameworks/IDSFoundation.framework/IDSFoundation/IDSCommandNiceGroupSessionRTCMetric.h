@class NSString, NSDictionary;

@interface IDSCommandNiceGroupSessionRTCMetric : NSObject <CUTRTCMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long command;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCommand:(long long)a0 success:(BOOL)a1 errorDomain:(id)a2 errorCode:(long long)a3 retryCount:(long long)a4;

@end

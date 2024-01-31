@class NSString, NSNumber, NSDictionary;

@interface IDSRegistrationProfileOperationAuthenticateMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) unsigned int registrationError;
@property (readonly, nonatomic) NSNumber *genericError;
@property (readonly, nonatomic) NSNumber *URLError;
@property (readonly, nonatomic) NSNumber *POSIXError;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 success:(BOOL)a1 connectionType:(unsigned int)a2 resultCode:(unsigned int)a3 registrationError:(unsigned int)a4 genericError:(id)a5 URLError:(id)a6 POSIXError:(id)a7;

@end

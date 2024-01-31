@class NSString;

@interface B2PSerialNumberGetResponse : B2PResponse

@property (readonly) NSString *serialNumber;

- (id)description;
- (void).cxx_destruct;
- (BOOL)parseResponse:(id)a0;

@end

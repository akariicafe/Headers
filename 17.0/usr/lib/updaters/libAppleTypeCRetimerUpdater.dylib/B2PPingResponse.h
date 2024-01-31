@interface B2PPingResponse : B2PResponse

@property (readonly) int protocolVersion;
@property (readonly) int protocolMode;

- (id)description;
- (BOOL)parseResponse:(id)a0;

@end

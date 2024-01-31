@class NSString;

@interface BlastDoorAPSUserPayloadHttpHeaders : NSObject {
    void /* unknown type, empty encoding */ aPSUserPayloadHttpHeaders;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *adhocServiceOverride;
@property (nonatomic, readonly) NSString *responseIdentifierString;
@property (nonatomic, readonly) NSString *strictTransportSecurity;
@property (nonatomic, readonly) NSString *traceId;
@property (nonatomic, readonly) NSString *splunkHint;
@property (nonatomic, readonly) NSString *asHttpHeader;

- (id)init;
- (void).cxx_destruct;

@end

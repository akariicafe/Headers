@class NSString;

@interface WFRemoteExecutionRequest : NSObject <WFPBCodable>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;
+ (id)identifierFromData:(id)a0 error:(id *)a1;
+ (BOOL)isUnsupportedVersionError:(id)a0;
+ (BOOL)supportsVersion:(long long)a0;
+ (id)unsupportedVersionError;

- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0 error:(id *)a1;
- (BOOL)writeTo:(id)a0 error:(id *)a1;
- (id)emptyProtobufError;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end

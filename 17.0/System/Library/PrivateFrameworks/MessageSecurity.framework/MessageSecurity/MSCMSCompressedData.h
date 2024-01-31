@class NSData;

@interface MSCMSCompressedData : NSObject <MSCMSMessage> {
    void /* unknown type, empty encoding */ dataContent;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ type;
@property (nonatomic, copy) NSData *dataContent;
@property (nonatomic, retain) void /* unknown type, empty encoding */ embeddedContent;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contentType;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)initWithDataContent:(id)a0 error:(id *)a1;
- (id)initWithEmbeddedContent:(id)a0 error:(id *)a1;

@end

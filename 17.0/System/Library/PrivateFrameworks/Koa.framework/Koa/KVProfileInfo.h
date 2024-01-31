@class NSData, NSString;

@interface KVProfileInfo : NSObject <KVJSONEncodable, KVJSONDecodable> {
    const struct ProfileInfo { unsigned char x0[1]; } *_profileInfo;
}

@property (readonly, nonatomic) NSData *buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capturedWithDatasetCount:(unsigned int)a0 error:(id *)a1;
+ (id)syntheticWithDatasetCount:(unsigned int)a0 error:(id *)a1;

- (id)buildVersion;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)deviceType;
- (id)capturedTime;
- (unsigned int)datasetCount;
- (id)JSONWithIndent:(unsigned char)a0;
- (id)initFromDictionary:(id)a0 error:(id *)a1;
- (id)initWithBuffer:(id)a0 error:(id *)a1;
- (id)initWithDatasetCount:(unsigned int)a0 capturedTime:(id)a1 deviceType:(id)a2 buildVersion:(id)a3 error:(id *)a4;
- (BOOL)isEqualToProfileInfo:(id)a0;

@end

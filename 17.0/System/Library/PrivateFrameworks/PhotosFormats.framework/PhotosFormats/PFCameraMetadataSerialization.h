@interface PFCameraMetadataSerialization : NSObject

+ (id)serializedDataFromCameraClientMetadata:(id)a0 error:(id *)a1;
+ (id)serializedDataFromClientMetadata:(id)a0 contactIDsInProximity:(id)a1 sharedLibraryMode:(long long)a2 error:(id *)a3;
+ (id)deserializedMetadataFromCameraClientMetadata:(id)a0 error:(id *)a1;
+ (id)serializedDataFromClientMetadata:(id)a0 error:(id *)a1;
+ (id)deserializedMetadataFromPrivateClientMetadata:(id)a0 error:(id *)a1;
+ (id)deserializedMetadataFromData:(id)a0 error:(id *)a1;

@end

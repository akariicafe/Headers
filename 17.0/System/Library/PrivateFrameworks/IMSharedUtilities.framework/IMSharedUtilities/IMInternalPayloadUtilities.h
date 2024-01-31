@interface IMInternalPayloadUtilities : NSObject

+ (BOOL)writeData:(id)a0 toURL:(id)a1;
+ (BOOL)writeDataPayloadToDisk:(id)a0 fileName:(id)a1;
+ (BOOL)writeMessagePayloadToDisk:(id)a0 fileName:(id)a1;
+ (id)writeMessagePayloadToTemporaryDirectory:(id)a0 fileName:(id)a1;
+ (BOOL)writePayload:(id)a0 toURL:(id)a1;

@end

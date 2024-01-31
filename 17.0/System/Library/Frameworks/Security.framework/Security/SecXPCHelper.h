@interface SecXPCHelper : NSObject

+ (id)safeErrorClasses;
+ (id)encodedDataFromError:(id)a0;
+ (id)safeErrorPrimitiveClasses;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)errorFromEncodedData:(id)a0;
+ (id)cleanseErrorForXPC:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)safeErrorCollectionClasses;
+ (id)cleanObjectForXPC:(id)a0;

@end

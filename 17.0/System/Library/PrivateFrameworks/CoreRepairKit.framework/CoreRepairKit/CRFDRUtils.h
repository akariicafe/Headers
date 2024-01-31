@interface CRFDRUtils : NSObject

+ (id)_getManifestForDataClass:(id)a0;
+ (id)getData:(id)a0 instance:(id)a1;
+ (id)getDataPayload:(id)a0 instance:(id)a1;
+ (id)getDiagnosticReport;
+ (id)getLocalSealingManifest;
+ (id)getStringFromCert:(struct { char *x0; char *x1; })a0 WithTag:(unsigned long long)a1 AndOID:(id)a2;
+ (BOOL)isDataClassSupported:(id)a0;
+ (BOOL)isDcSignedCombinedDataClass:(id)a0 error:(id *)a1;
+ (BOOL)isDcSignedDataClass:(id)a0 error:(id *)a1;
+ (BOOL)isDcSignedSealingManifest:(id *)a0;
+ (id)isServicePartWithError:(id *)a0;

@end

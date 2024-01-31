@interface HMDSULocalUtilities : HMFObject

+ (id)progressFromControllerProgress:(id)a0;
+ (id)descriptorFromControllerStatus:(id)a0 controllerDescriptor:(id)a1 errorCode:(id)a2;
+ (void)parseProductVersion:(id)a0 intoMajorVersion:(id *)a1 minorVersion:(id *)a2 updateVersion:(id *)a3;

@end

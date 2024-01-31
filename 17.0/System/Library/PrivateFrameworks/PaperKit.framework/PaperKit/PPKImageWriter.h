@interface PPKImageWriter : NSObject

- (BOOL)writeUsingBaseImage:(id)a0 annotationImage:(struct CGImage { } *)a1 asImageOfType:(id)a2 toConsumer:(struct CGDataConsumer { } *)a3 annotationMetadata:(id)a4 modifiedImageDescription:(id)a5 encryptPrivateMetadata:(BOOL)a6 error:(id *)a7;

@end

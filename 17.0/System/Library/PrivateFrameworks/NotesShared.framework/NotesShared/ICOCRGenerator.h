@interface ICOCRGenerator : NSObject

+ (id)ocrStringFromImage:(struct CGImage { } *)a0 title:(id *)a1 languages:(id)a2;
+ (id)ocrStringFromImageURL:(id)a0 title:(id *)a1 languages:(id)a2;
+ (id)ocrStringFromImageRequestHandler:(id)a0 title:(id *)a1 languages:(id)a2 session:(id)a3;

@end

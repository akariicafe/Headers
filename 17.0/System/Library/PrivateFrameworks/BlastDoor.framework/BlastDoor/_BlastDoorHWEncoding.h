@interface _BlastDoorHWEncoding : NSObject

+ (id)dataRepresentation:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 uuid:(id)a3 date:(id)a4;
+ (id)decodeHandwritingFromData:(id)a0;
+ (id)encodeHandwriting:(id)a0 compress:(BOOL)a1;

@end

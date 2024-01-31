@interface HKMedicationsBarcodeNDCParser : NSObject

+ (id)parsedGTIN14CodeFromBarcodeObservation:(id)a0;
+ (id)_barcodeObservationsFrom:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
+ (id)_convertNDCFromGTIN14Code:(id)a0;
+ (BOOL)_isGTIN14CodeValid:(id)a0;
+ (id)_parsedGTIN14FromDataMatrix:(id)a0;
+ (id)_parsedGTIN14FromDataMatrixPayload:(id)a0;
+ (id)_parsedGTIN14FromEAN13:(id)a0;
+ (id)_parsedGTIN14FromEAN13Payload:(id)a0;
+ (id)_parsedNDCFromEAN13:(id)a0;
+ (id)hkt_convertGTIN14ToNDCCode:(id)a0;
+ (id)hkt_parsedGTIN14FromDataMatrixPayload:(id)a0;
+ (id)hkt_parsedGTIN14FromEAN13Payload:(id)a0;
+ (id)hkt_parsedNDCFromDataMatrixPayload:(id)a0;
+ (id)hkt_parsedNDCFromEAN13Payload:(id)a0;
+ (BOOL)isObservationSupported:(id)a0;
+ (id)parsedGTIN14CodesFromCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
+ (id)parsedNDCCodeFromBarcodeObservation:(id)a0;
+ (id)parsedNDCCodesFromCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
+ (id)parsedNDCFromDataMatrix:(id)a0;

@end

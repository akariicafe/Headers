@class NSSet, NSArray, NSString, NSDictionary, PKPaperList, NSURL;

@interface PKPrinterDescription : NSObject <PKPropertyVisitable, NSSecureCoding> {
    NSDictionary *_txtRecord;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL type_has_duplex;
@property (readonly) BOOL type_has_color;
@property (readonly) NSSet *attrs_document_format_supported;
@property (readonly) NSSet *attrs_printer_native_formats;
@property (readonly) NSArray *attrs_media_source_supported;
@property (readonly) NSString *driverformat;
@property (readonly) NSSet *jpegFeatures;
@property (readonly) NSSet *mandatoryJobAttributes;
@property (readonly) int documentPasswordSupported;
@property (readonly) unsigned long long jobAccountIDSupport;
@property (readonly) int max_pdf;
@property (readonly) int max_jpeg;
@property (readonly) int max_jpeg_x;
@property (readonly) int max_jpeg_y;
@property (readonly) int preferred_landscape;
@property (readonly) BOOL print_scaling_supported;
@property (readonly) BOOL pin_required;
@property (readonly) unsigned long long printer_type_from_cups_scalar;
@property (readonly) int identifyActions;
@property (readonly) NSArray *sides;
@property (readonly) NSArray *orientations;
@property (readonly) NSArray *quality;
@property (readonly) NSArray *formats;
@property (readonly) NSArray *mediaColSupportedArray;
@property (readonly) NSDictionary *specialFeedOrientation;
@property (readonly) BOOL supportsPrintColorMode;
@property (readonly) PKPaperList *paperList;
@property (readonly) NSArray *outputModes;
@property (readonly) NSArray *finishings;
@property (readonly) NSArray *finishingTemplates;
@property (readonly) NSArray *outputBins;
@property (readonly) NSArray *trays;
@property (readonly) NSArray *inputSlots;
@property (readonly) NSArray *mediaTypes;
@property (readonly) NSArray *jobPresets;
@property (readonly) NSURL *printerInfoURL;
@property (readonly) NSURL *suppliesInfoURL;
@property (readonly) NSURL *quotaManagementURL;
@property (readonly) NSString *deviceID;
@property (readonly) NSDictionary *dids;
@property (readonly) NSDictionary *translations;

+ (id)_classesForCoding;
+ (id)standardRequestedAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_calcDeviceID:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calcFininishingTemplates:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (unsigned long long)_calcIdentifyActions:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calcInputSlots:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (long long)_calcJobAccountIDSupport:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calcJobPresets:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calcMediaTypes:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calcOutputBins:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (BOOL)_calcPrintScalingSupported:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (void)_calcPrinterDriverInfo:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calcSpecialFeedOrientation:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calculateFormats:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calculateMediaColSupportedArray:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calculateOutputModes:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calculatePaperList:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calculateQuality:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (id)_calculateSides:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (void)_ingestAttrs:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0;
- (void)_ingestTxtRecord:(id)a0;
- (id)_makePrinterDeviceIDFromTxt;
- (id)initWithAttributes:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0 translations:(id)a1;
- (id)initWithAttributes:(const struct GET_PRINTER_ATTRIBUTES_Response { void /* function */ **x0; id x1; } *)a0 txtRecord:(id)a1 translations:(id)a2;
- (id)initWithTXT:(id)a0;
- (id)printInfoSupportedDictionary;
- (id)txtRecordObjectForKey:(id)a0;
- (void)visitProperties:(struct Visitor { void /* function */ **x0; } *)a0;

@end

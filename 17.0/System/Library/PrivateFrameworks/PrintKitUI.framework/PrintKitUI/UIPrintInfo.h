@class NSArray, NSDictionary, UIPrinter, UIPrintPaper, NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) UIPrinter *currentPrinter;
@property (nonatomic) long long copies;
@property (retain, nonatomic) NSDictionary *jobPreset;
@property (retain, nonatomic) NSArray *appliedPresetsList;
@property (nonatomic) long long pageCount;
@property (retain, nonatomic) NSArray *pageRanges;
@property (retain, nonatomic) UIPrintPaper *printPaper;
@property (nonatomic) double scalingFactor;
@property (nonatomic) BOOL pdfAnnotationsAvailable;
@property (retain, nonatomic) NSString *jobAccountID;
@property (nonatomic) BOOL scaleToFit;
@property (nonatomic) BOOL scaleDownOnly;
@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) NSString *inputSlot;
@property (nonatomic) long long quality;
@property (retain, nonatomic) NSArray *nUpRowsColumns;
@property (nonatomic) long long nUpLayoutDirection;
@property (nonatomic) long long borderType;
@property (nonatomic) long long bookletStyle;
@property (nonatomic) BOOL flipHorizontal;
@property (nonatomic) long long finishingOption;
@property (retain, nonatomic) NSString *finishingTemplate;
@property (nonatomic) long long staple;
@property (nonatomic) long long punch;
@property (nonatomic) long long fold;
@property (nonatomic) long long laminate;
@property (nonatomic) long long coat;
@property (nonatomic) long long trim;
@property (retain, nonatomic) NSString *outputBin;
@property (retain, nonatomic) NSString *pageStackOrder;
@property (nonatomic) BOOL scaleUp;
@property (retain, nonatomic) NSString *pdfPassword;
@property (nonatomic) BOOL imagePDFAnnotations;
@property (copy, nonatomic) NSString *printerID;
@property (copy, nonatomic) NSString *jobName;
@property (nonatomic) long long outputType;
@property (nonatomic) long long orientation;
@property (nonatomic) long long duplex;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)printInfo;
+ (id)printInfoWithDictionary:(id)a0;

- (void)updateWithDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createPrintSettingsForPrinter:(id)a0;
- (void)_updateWithPrinter:(id)a0;
- (void)applyPreset:(id)a0;
- (void)clearPreset:(id)a0 origPrintInfo:(id)a1;
- (BOOL)nUpActive;
- (long long)numNUpColumns;
- (long long)numNUpRows;
- (void)resetToDefaultSettings:(id)a0;

@end

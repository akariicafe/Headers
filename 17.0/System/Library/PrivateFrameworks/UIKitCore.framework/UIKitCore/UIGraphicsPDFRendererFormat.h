@class NSURL, NSMutableData, NSDictionary;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat

@property (retain) NSURL *outputURL;
@property (retain) NSMutableData *pdfData;
@property (copy, nonatomic) NSDictionary *documentInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

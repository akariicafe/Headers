@class NSData, NSString;

@interface HKCDADocument : NSObject {
    NSData *_internalDocumentData;
    NSData *_compressedDocumentData;
}

@property (readonly, copy) NSData *documentData;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *patientName;
@property (readonly, copy) NSString *authorName;
@property (readonly, copy) NSString *custodianName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_compressDocumentDataForTransfer:(id *)a0;
- (id)_compressedDocumentData;
- (BOOL)_decompressDocumentDataForDelivery:(id *)a0;
- (id)_descriptionFieldTitle:(id)a0 content:(id)a1 maxSize:(unsigned long long)a2;
- (id)_validateConfiguration;
- (void)encodeWithCoder:(id)a0 omittedContentFlags:(long long)a1;
- (id)initWithCoder:(id)a0 omittedContentFlags:(long long)a1;
- (id)initWithDocumentData:(id)a0 compressedDocumentData:(id)a1 title:(id)a2 patientName:(id)a3 authorName:(id)a4 custodianName:(id)a5;

@end

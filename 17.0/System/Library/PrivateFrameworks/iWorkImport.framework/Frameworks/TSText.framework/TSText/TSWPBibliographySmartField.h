@class NSArray, NSString;

@interface TSWPBibliographySmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray *_citationRecords;
    BOOL _isLocalizable;
}

@property (copy, nonatomic) NSArray *citationRecords;
@property (nonatomic) BOOL isLocalizable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidBibliographyField:(id)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsPasteAsSmartField;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)citationSmartFields;
- (unsigned short)smartFieldKind;

@end

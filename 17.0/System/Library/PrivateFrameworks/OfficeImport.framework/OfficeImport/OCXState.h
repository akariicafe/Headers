@class CXNamespace;

@interface OCXState : NSObject

@property (readonly, nonatomic) int xmlFormat;
@property (retain, nonatomic) CXNamespace *OCXRelationshipsNamespace;
@property (retain, nonatomic) CXNamespace *OCXDrawingNamespace;

- (id)init;
- (void).cxx_destruct;
- (id)OCXCommentsExtendedRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXDrawingRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXSettingsRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXSlideRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXSlideMasterRelationshipType;
- (id)OCXStylesRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXThemeRelationshipType;
- (void)setXmlFormat:(int)a0;
- (void)setupNSForXMLFormat:(int)a0;

@end

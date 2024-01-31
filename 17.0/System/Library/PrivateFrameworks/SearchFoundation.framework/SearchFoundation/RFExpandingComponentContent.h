@class NSString, RFReferenceFootnoteCardSection, NSDictionary, NSData, RFLongItemStandardCardSection;

@interface RFExpandingComponentContent : NSObject <RFExpandingComponentContent, NSSecureCoding, NSCopying> {
    struct { unsigned char long_item_standard_card_section : 1; unsigned char reference_footnote_card_section : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFLongItemStandardCardSection *long_item_standard_card_section;
@property (retain, nonatomic) RFReferenceFootnoteCardSection *reference_footnote_card_section;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLong_item_standard_card_section;
- (BOOL)hasReference_footnote_card_section;

@end

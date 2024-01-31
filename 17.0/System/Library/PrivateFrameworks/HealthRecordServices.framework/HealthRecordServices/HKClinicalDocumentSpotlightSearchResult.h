@class NSString, HKMedicalRecord, NSUUID, NSArray;

@interface HKClinicalDocumentSpotlightSearchResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, copy, nonatomic) NSUUID *attachmentUUID;
@property (readonly, copy, nonatomic) NSString *previewString;
@property (readonly, copy, nonatomic) NSArray *previewStringMatchRanges;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 medicalRecord:(id)a1 attachmentUUID:(id)a2 previewString:(id)a3 previewStringMatchRanges:(id)a4;

@end
